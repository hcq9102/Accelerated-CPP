//
// Created by Q on 1/10/2021.
//

#include "median.h"
#include <algorithm>
using namespace std;
double median(vector<double> v){
    typedef vector<double>::size_type size_tp;
    size_tp size = v.size();
    size_tp mid = size/2;
    sort(v.begin(), v.end());
    return size%2 ==0 ? (v[mid]+v[mid-1])/2 : v[mid];
}