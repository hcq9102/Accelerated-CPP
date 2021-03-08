//
// Created by Q on 12/30/2020.
//

#ifndef GUARD_grade_h
#define GUARD_grade_h

#include <vector>
#include "student_info.h"

double grade(double, double, double);
double grade(double, double, const std::vector<double>&);
double grade(const student_info&);

bool fgrade(const student_info&);

#endif
