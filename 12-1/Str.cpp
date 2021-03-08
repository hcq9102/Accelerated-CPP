#include "Str.h"
#include <memory>
#include <stdexcept>
#include <cctype>
#include <algorithm>
#include <iostream>

using namespace std;

// public functions
Str& Str::operator=(const Str& rhs){
    if(&rhs != this){
        uncreate();
        create(rhs.begin(), rhs.end());
    }
    return *this;
}

Str::size_type Str::copy(iterator s, size_type n, size_type pos) const {
    if (pos > size()) throw out_of_range("pos > size()");
    size_t copy_length = min(n, size() - pos);
    ::copy(chars + pos, chars + pos + copy_length, s);
    return copy_length;
}

Str& Str::operator +=(const Str& s) {
    size_type new_length = length + s.size();
    iterator new_chars = alloc.allocate(new_length);
    uninitialized_copy(chars, chars + length - 1, new_chars);
    uninitialized_copy(s.begin(), s.end(), new_chars + length - 1);
    alloc.construct(new_chars + new_length - 1, '\0');

    uncreate();

    length = new_length;
    chars = new_chars;
}



// private functions

void Str::create(size_type n, char val){
    // null-terminator
    length = n + 1;
    chars = alloc.allocate(length);
    uninitialized_fill(chars, chars + length - 1, val);
    // construct a \0 as null terminator
    alloc.construct(chars + length - 1, '\0');
}

template <class In> void Str::create(In i, In j){
    length = j - i + 1;
    chars = alloc.allocate(length);
    uninitialized_copy(i, j, chars);
    alloc.construct(chars + length - 1, '\0');
}

void Str::uncreate() {
    if(chars){
        iterator it = chars + length;
        while(it != chars){
            alloc.destroy(--it);
        }
        alloc.deallocate(chars, length);
    }
    chars = 0;
    length = 0;
}

// Other functions

ostream& operator<<(ostream& os, const Str& s) {
    for(Str::size_type i = 0; i != s.size(); ++i)
        os << s[i];
    return os;
}