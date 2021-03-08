#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

template<typename T>
T max(T &v1, T &v2){
    return v1 > v2? v1 : v2;
}

void test01(){
    vector<int> v1 = {1,3,4,5};
    vector<int> v2 = {1,2,3,4,6};
    vector<int> v3 = max(v1,v2);
    //max<vector<int>>(v1,v2);
    //output the result v3
    if(v3==v1){
        cout<<"the greater vector is :"<< " v1"<<endl;
    }else{
        cout<<"the greater vector is :"<< " v2"<<endl;
    }
    // this part could be omitted
    for(vector<int>::iterator iter = v3.begin(); iter !=v3.end(); iter++){
        cout<<(*iter) << " " ;
    }
}

void test02(){
    vector<double> v1 = {1.0,3.2,4.1,5.2,6.9};
    vector<double> v2 = {1.1,2.5,3.6,4.7,6.9};
    vector<double> v3 = max(v1,v2);
    if(v3==v1){
        cout<<"the greater vector is :"<< " v1"<<endl;
    }else{
        cout<<"the greater vector is :"<< " v2"<<endl;
    }
    //output the result v3
    for(vector<double>::iterator iter = v3.begin(); iter !=v3.end(); iter++){
        cout<<(*iter) << " " << endl;
    }
}

int main() {
    test01();
    cout << endl;
    test02();
   // system("pause");
    return 0;
}

/*
 * 进阶：
 *
 * vector类是含有operator> 的构造函数，所以上述在调用max对比大小时，是无报错的；
 * 现在定义一个not—comparable的类，里面不准含有operator> 的函数，那么在直接调用max就会出错，因为编译器不知道怎么比较这个类对象。
 *
 * 所以还需要写一个bool operator函数，把类对象传递进去做参数。再调用max时，就是比较的对象的elem值，编译器知道要做什么，所以不报错。
 * 单纯的用operator>也是可以的，赋值就可以比较大小
 * */

/*
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;



template<typename T>
T max(T & a, T &b){
    return a > b? a : b;
}


class not_comparable{

public:
    int elem;
};


bool operator>(not_comparable lhs, not_comparable rhs) {
    return lhs.elem > rhs.elem;
}


int main() {
    // objects v1, v2, v3
    not_comparable v1, v2, v3;


    v3 = max(v1,v2);

    //不用max，直接可以call  operator 调用
    v1.elem = 5;
    v2.elem = 4;
    if(v1 > v2){
        cout <<"v1 > v2 ";
    }else{
        cout << "v1 not > v2";
    }
    return 0;
}



 */
