#include <iostream>
using std::endl;
using std::cout;
int main() {
    int x = 5;
    int* p = &x;
    cout <<"x = " << x <<endl;
    //change value of x through p pointer
    *p = 6;
    cout <<"new x = "<<x <<endl;
    return 0;
}
