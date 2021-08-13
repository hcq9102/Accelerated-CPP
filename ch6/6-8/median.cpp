#include "median.h"
#include <algorithm>
using namespace std;

double median(vector<double> v){
    typedef vector<double>::size_type sz_tp;
    sz_tp size = v.size();
    sz_tp mid = size/2;
    sort(v.begin(),v.end());
    return size%2 == 0? (v[mid-1]+v[mid])/2 : v[mid];
}
