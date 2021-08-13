#include <iostream>
using namespace std;
template <class T>
void my_swap(T&x, T&y){
    T temp = x;
    x =y;
    y = temp;
}

int main() {
    int x = 5;
    int y = 9;
    cout<<" before swap:"<<endl;
    cout <<"x= " <<x<<endl;
    cout <<"y= " <<y<<endl;


    //call swap
    my_swap(x,y);
    cout<<" after swap:"<<endl;
    cout <<"x= " <<x<<endl;
    cout <<"y= " <<y<<endl;
}
