//
// Created by Q on 2/2/2021.
//

#ifndef INC_8_1_GRADE_H
#define INC_8_1_GRADE_H
#include "Student_info.h"
#include <vector>

double grade(const Student_info&);

double grade(double, double, const std::vector<double>&);

double grade(double, double, double);

bool fgrade(const Student_info&);

#endif //INC_8_1_GRADE_H
