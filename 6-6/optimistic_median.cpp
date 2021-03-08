#include <vector>
#include <algorithm>  // remove_copy, back_inserter
#include "Student_info.h"
#include "grade.h"
#include "median.h"

using namespace std;

// median of the nonzero elements of s.homework, or 0 if no such elements exist
double optimistic_median(const Student_info& s){
    vector<double> nonzero;
    remove_copy(s.homework.begin(),s.homework.end(),back_inserter(nonzero),0);//put non_zero elems into vector nonzero
    if(nonzero.empty()){
        return grade(s.midterm, s.final,0);
    }else{
        return grade(s.midterm, s.final,median(nonzero));
    }
}
