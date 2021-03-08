/*
#include <iostream>
using namespace std;
int main() {
    int a  =10;
    int &b = a;
    cout<<"a = "<< a<<endl;
    cout<<"b = "<< b<<endl;
    b = 20;
    cout<<"change b = 20 "<<endl;
    cout<<"a = "<< a<<endl;
    cout<<"b = "<< b<<endl;
    return 0;
}
*/
//

#include <iostream>
using namespace std;
int main() {
    int a  =10;
    int &b = a; // must be initialized
    cout<<"a = "<< a<<endl;
    cout<<"b = "<< b<<endl;
    //once it was initialized, no more change
    int c = 100;
    b =c; //assignment is ok

    cout<<"change b  "<<endl;
    cout<<"a = "<< a<<endl;
    cout<<"b = "<< b<<endl;
    return 0;
}