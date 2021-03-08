//
// Created by Q on 1/14/2021.
//

#ifndef INC_6_6_GRADE_H
#define INC_6_6_GRADE_H
#include <vector>
#include "Student_info.h"

double grade(double, double, double);
double grade(double, double, const std::vector<double>&);
double grade(const Student_info&);
#endif //INC_6_6_GRADE_H
