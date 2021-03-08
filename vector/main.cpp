#include <iostream>
#include <vector>
using namespace std;
// vector capacity and size

void PrintVector(vector<int>& v){ //打印vector，用引用的方式传进来
    for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
        cout<< *it << " ";
    }
    cout <<endl;
}
void test01(){
    vector<int> v1;
    for(int i =0; i< 10; i++){
        v1.push_back(i);
    }
    PrintVector(v1);

    //判断是否为空
    if(v1.empty()){
        cout<<"Vector is empty";
    }else{
        cout<<"vector is not empty"<<endl;
        cout << "v1的容量为： "<< v1.capacity()<<endl;
    }
    v1.insert(v1.begin(),1000);
    //重新指定大小 : 如果指定的过长，就会用0来默认填充
    //v1.resize(18);
    v1.resize(18,100); //也可以利用重载版本，指定默认填充值，例如100
    PrintVector(v1);
    //指定变短，后边就被删除了
    v1.resize(5);
    PrintVector(v1);
}
int main() {
    test01();
    return 0;
}

