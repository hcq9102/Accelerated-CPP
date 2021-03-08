#include "grade.h"
#include "average_analysis.h"
#include <numeric>
#include <algorithm>

using namespace std;
double average(const vector<double>&v){
    return accumulate(v.begin(),v.end(),0.0)/v.size();
}

double average_grade(const Student_info& s){
    return grade(s.midterm, s.final, average(s.homework));
}
