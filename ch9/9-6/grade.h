
#ifndef INC_9_6_GRADE_H
#define INC_9_6_GRADE_H
#include <vector>
#include "student_info.h"

double grade(double midterm,double fin,double homework);
double grade(double midterm,double fin,const std::vector<double>& hw);
#endif //INC_9_6_GRADE_H
