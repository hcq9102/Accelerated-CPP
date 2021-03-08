#include <iostream>
#include <iterator>
#include <vector>
using namespace  std;

int main() {
    vector<int> u(10,100);
    vector<int> v;
    copy(u.begin(),u.end(),back_inserter(v));// w/o size of v
    //method2
    copy(u.begin(),u.end(),inserter(v,v.begin())); //insert u into v vector from position = v.begin();
    return 0;
}
