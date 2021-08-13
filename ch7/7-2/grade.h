//
// Created by Q on 1/19/2021.
//

#ifndef INC_7_2_GRADE_H
#define INC_7_2_GRADE_H
#include "Student_info.h"
#include <vector>

double grade(const Student_info&);
double grade(double, double, const std::vector<double>&);
double grade(double, double, double);
bool fgrade(const Student_info&);

#endif //INC_7_2_GRADE_H
