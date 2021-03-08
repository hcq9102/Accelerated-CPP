//
// Created by Q on 1/10/2021.
//

#include "optimistic_median_analysis.h"
#include <algorithm>
#include "median.h"
using namespace std;

double optimistic_median(const Student_info& s)
{
    vector<double> nonzero;
    remove_copy(s.homework.begin(),s.homework.end(),back_inserter(nonzero),0);
    //remove_copy(b,e,d,t)              把序列[b,e)中全部不等于t的元素拷贝到由d指示的目的地中；
    if(nonzero.empty())
        return grade(s.midterm,s.fin,0);
    else
        return grade(s.midterm,s.fin,median(nonzero));
}

double optimistic_median_analysis(const std::vector<Student_info>& s)
{
    vector<double> grades;
    transform(s.begin(),s.end(),back_inserter(grades),optimistic_median);
    return median(grades);
}