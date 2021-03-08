

#ifndef INC_6_8_GRADE_H
#define INC_6_8_GRADE_H
#include <vector>
#include "Student_info.h"

double grade(double midterm,double final,double homework);
double grade(double midterm,double final,const std::vector<double>& hw);
double grade(const Student_info& s);

bool fgrade(const Student_info& s);
bool pgrade(const Student_info& s);
#endif //INC_6_8_GRADE_H
