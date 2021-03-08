

#ifndef INC_11_7_GRADE_H
#define INC_11_7_GRADE_H
#include "Vec.h"
#include "student_info.h"

double grade(double midterm,double fin,double homework);
double grade(double midterm,double fin,const Vec<double>& hw);
#endif //INC_11_7_GRADE_H
