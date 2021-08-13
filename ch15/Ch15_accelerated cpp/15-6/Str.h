//
// Created by Q on 3/26/2021.
//

#ifndef INC_15_6_STR_H
#define INC_15_6_STR_H
#include <cstring>
#include "Vec.h"

class Str{
    // input operator
    friend std::istream& operator>>(std::istream&, Str&);

public:

    // compound operator changes left operand => member
    Str& operator+=(const Str& s){
        std::copy(s.data.begin(), s.data.end(), std::back_inserter(data));
        return *this;
    }

    typedef Vec<char>::size_type size_type;

    size_type size() const {return data.size();}

    // constructors

    Str(){}

    Str(size_type n, char c): data(n, c) {}

    Str(const char* cp){
        std::copy(cp, cp + std::strlen(cp), std::back_inserter(data));
    }

    template <class In> Str(In b, In e){
        std::copy(b, e, std::back_inserter(data));
    }

    // index operator
    char& operator[](size_type i) {return data[i];}
    const char& operator[](size_type i) const {return data[i];}

private:
    Vec<char> data;
};

// output operator
std::ostream& operator<<(std::ostream&, const Str&);

// concatenation operator
Str operator+(const Str&, const Str&);


#endif //INC_15_6_STR_H
