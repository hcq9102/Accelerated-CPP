#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
//8-7:max() use the system default arithmetic symbols, and compare the two arguments required they have the same type.


//8-8: Becasuse the iterator do not support one iterator plus another iterator, and end-begin,
// its' type is called difference_type( an signed int), iterator allow this operation:
//
//iter+n,
//iter-n,
//iter1-iter2,