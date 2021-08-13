/*
 11-8. Write a simplified version of the standard list class and its associated iterator.

Ans：
vector：利用数组实现；顺序存储结构，采用预分配策略分配内存；可随机访问元素所以利用索引实现元素访问；仅支持后插故只实现push_back()；

list：利用双向链表实现；采用链式存储结构，不需要预分配；不支持随机访问即不支持索引，利用迭代器++和--以实现遍历；支持前插push_fron()和后插push_back()以及insert()等操作；


 //节点结构如下：
template <class T>
struct node{
    T data;//数据域
    node<T> *prior,*next;//前向和后向指针

    node(){}
    node(const T& t)
    {
        data=t;
        next=0;
        prior=0;
    }
};
 * */

#include <iostream>
#include "List.h"
using namespace std;

int main()
{
    List<int> v1,v2,v3;

    int n;
    while(cin>>n)
        v1.push_back(n);

    cout<<"v1: ";
    for(List<int>::iterator it=v1.begin();it!=v1.end();++it)
        cout<<*it<<" ";
    cout<<endl;

    cin.clear();
    while(cin>>n)
        v3.push_back(n);

    cout<<"v3: ";
    for(List<int>::iterator it=v3.begin();it!=v3.end();++it)
        cout<<*it<<" ";
    cout<<endl;


    v2=v1;
    cout<<"v2: ";
    for(List<int>::iterator it=v2.begin();it!=v2.end();++it)
        cout<<*it<<" ";
    cout<<endl;

    return 0;
}
