#include <iostream>
#include <list>
using namespace std;
void printList(const list<int>& l1){
    //加const是为了防止修改容器值，只读模式
    for(list<int>::const_iterator it =l1.begin(); it !=l1.end(); it++){
        cout << *it<< " ";
    }
    cout <<endl;
}

void test02(){
    list<int> l1;//默认构造
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);

    printList(l1);

    //区间方式构造
    list<int> l2(l1.begin(),l1.end());
    printList(l2);

    //拷贝构造
    list<int> l3(l2);
    printList(l3);
}
int main() {
    test02();
    return 0;
}
