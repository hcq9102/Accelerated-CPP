#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <vector>
using namespace std;

template <class T> T median(vector<T> v){
    typedef typename vector<T>::size_type vec_sz;
    vec_sz size = v.size();
    if(size ==0)
        throw domain_error("median of an empty vector");
    sort(v.begin(),v.end());
    vec_sz mid = size/2;
    return size%2 ==0? (v[mid]+v[mid-1])/2 : v[mid];
}

int main() {
    vector<double> v1 = {88.1,98.3,78.6,55.5};
    vector<int> v2 = {88,89,95,50};
    double result1 = median(v1);
    int result2 = median(v2);
    cout<<"v1 the final grade is: "<< result1<<endl;
    cout<<"v2 the final grade is: "<< result2;
    return 0;
}
