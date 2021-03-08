#include<iostream>
using namespace std;

int a;

istream& input(istream& in)
{
    in>>a;
    return in;
}
ostream& output(ostream& out)   //你的是结构体或是类里的吧，所以可以是const函数
{
    out<<a;
    return out;
}
int main()
{
    input(cin);
    output(cout);
    system("pause");
    return 0;
}
