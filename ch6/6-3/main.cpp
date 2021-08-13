#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v(10,100);
    vector<int> u(v.size());
    copy(v.begin(),v.end(),u.begin());
    /*
     *    功能很简单，把vector v复制给u，但运行异常。为什么？

   vector<int> u；定义时定义时没有分配空间，copy不成功。应改为vector<int> u(v.size());
     * */
    //u为空，而上述copy功能只是为u中已经存在的元素进行复制，而u为空，故运行时会提示段错误，即给一个不存在的元素复制。

    //利用迭代器适配器back_inserter（vector），用容器作为参数并产生一个迭代器最为目的地，向容器末尾添加元素
    //不仅复制而且当目的容器空间不足时，会对其进行扩展，即它是一种扩展的复制
    copy(v.begin(),v.end(),back_inserter(u));
    for(vector<int>::const_iterator i=u.begin();i!=u.end();++i)
    {
        cout<<*i<<" ";
    }
    cout<<u.size()<<endl;
    return 0;
}

/* 注意，解释的u ,v 调换了。
 *    如果想使用vector<int> v;有两个方法可以实现同样的功能；

方法一： 使用iterator适配器copy(u.begin(),u.end(),back_inserter(v));

              back_insert;是iterator adapter: 有一个容器作为参数，并且生成一个迭代器，但这个迭代器被称用作目的地时，就会在容器末尾自动的添加元素。所以vector<int> v;不必定义大小。



方法二：循环的用push_back来实现

for(vector<int>::iterator it=u.begin();it!=u.end();it++)
     v.push_back(*it);
 * */