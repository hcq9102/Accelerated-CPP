#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <iterator>
#include <utility>
#include <algorithm>

using namespace std;

template <class T>
void my_print(T& t){

    for(typename T::const_iterator i = t.begin(); i != t.end(); ++i){
        cout << i->first <<' ' << i->second << endl;
    }


}
/*(1)back_inserter(container)：使用push_back()在容器尾端安插元素，元素排列顺序和安插顺序相同。
 * 只有在提供了push_back()成员函数的容器才能使back_inserter(container)这样的容器有：vector,deque,list
 *
 * (2)假如拷贝vector的元素到map里，用back-inserter() 就会报错,因为map不支持back——inserter（）
 *
 * First we should konw that what's the function of back_inserter(v)?
 * If you had read the chapter06 carefully,and you will catch it.
 * "back_inserter(v)" need an arguments which typen is an container-
 * it must be support push_back operator. and its' function is: use v to produce an iterator,
 * and the iterator will inserter elements into the v. so in exercise 8-6 the x should be a container,
 * and copy(x.begin(),x.end(),back_inserter(m)) will not work, because the map does not support "push_back".
 *
 * */
int main() {
    //(1)
    map<int, string> m = {{1, "apple"}, {200,"orange"}, {3, "watermelon"}};
    typedef pair<int, string> element;
    vector<element> x;
    list<element> y;
    copy(m.begin(), m.end(), back_inserter(x));
    copy(m.begin(), m.end(), back_inserter(y));
    my_print(x);
    cout<<"(1)"<<endl;
    my_print(y);
    cout<<endl;
/*
    cout<<"(2)"<<endl;
    vector<element> n = {{20, "Alice"}, {30, "Dannel"}};
    copy(n.begin(), n.end(), back_inserter(m)); //error
    my_print(m);
    return 0;
    */
}
