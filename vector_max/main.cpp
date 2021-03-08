#include <iostream>
#include <vector>


using namespace std;
template<typename T>
/*
bool max(T &v1, T &v2){
    return v1 > v2? true : false;
}
 */

T max(T &v1, T &v2){
    return v1 > v2? v1 : v2;
}

void test01(){
    vector<int> v1 = {1,2,3,4};
    vector<int> v2 = {1,2,3,4,5,6};
    max(v1,v2);
}


int main() {
    test01();
    return 0;
}
