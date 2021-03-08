//引用做函数参数: 函数传参时候，可以利用引用的技术让形参修饰实参； 取代指针

//交换函数


#include <iostream>
using namespace std;

//1 值传递： // 在主函数里调用，a,b并没有改变
void mySwap01(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    //在函数内部是交换了的, 形参确实发生了改变
//    cout<< "swap1 a = "<< a <<endl;
//    cout <<"swap1 b = "<< b <<endl;
}

//2 地址传递： // 在主函数里调用，a,b并没有改变
void mySwap02(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
//3 引用传递： 里面的代码和第一种传值的一样，只不过我们的函数参数是
int mySwap03(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10;
    int b = 20;
    //值传递，实参并没有发生改变
//    mySwap01(a,b);
//    cout<< "a = "<< a <<endl;
//    cout <<"b = "<< b <<endl;

   //地址传递，实参也发生了改变
//    mySwap02(&a,&b);
//    cout<< "a = "<< a <<endl;
//    cout <<"b = "<< b <<endl;

    //引用传递，实参也发生了改变
    mySwap02(&a,&b);
    cout<< "a = "<< a <<endl;
    cout <<"b = "<< b <<endl;
    return 0;
}
