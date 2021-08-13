#include <iostream>
using namespace std;
template<typename T>
T max(T &a, T &b){
    return a > b? a: b;
}
void test01(){
    int a = 10;
    int b =2;
    int c = max(a,b);
    cout <<"which one is bigger: "<< c << endl;
}

int main() {
    test01();
    system("pause");
    return 0;
}
