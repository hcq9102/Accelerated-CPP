//
// Created by Q on 1/10/2021.
//


#ifndef grade_H
#define grade_H
#include <vector>
#include "Student_info.h"

double grade(double midterm,double fin,double homework);
double grade(double midterm,double fin,const std::vector<double>& hw);
double grade(const Student_info& s);

bool fgrade(const Student_info& s);
bool pgrade(const Student_info& s);

#endif // grade_H