//
// Created by Q on 1/10/2021.
//平均函数分析

#include "average_analysis.h"
#include <numeric>
#include "grade.h"
#include <algorithm>
#include "median.h"
using namespace std;

double average(const vector<double>& v)
{
    return accumulate(v.begin(),v.end(),0.0)/v.size();
}

double average_grade(const Student_info& s)
{
    return grade(s.midterm,s.fin,average(s.homework));
}

double average_analysis(const vector<Student_info>& s)
{
    vector<double> grades;
    transform(s.begin(),s.end(),back_inserter(grades),average_grade);
    //transform(b,e,d,f) 依据域[b,e)中的元素执行函数f，把f的结果存储在d中；
    return median(grades);
}