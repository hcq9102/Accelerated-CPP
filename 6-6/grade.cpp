#include <vector>
#include "grade.h"
#include "median.h"
#include "Student_info.h"

using std::domain_error;
using std::vector;
double grade(double midterm, double final, double homework){
    return 0.2*midterm + 0.4 * final + 0.4*homework;
}

// compute a student's overall grade from midterm and final exam grades and vector of homework grades.
// this function does not copy its argument, because median (function) does it for us.
// (S4.1.2/54)
double grade(double midterm, double final, const vector<double>& hw){
    if(hw.size()==0){
        throw domain_error("student has done no hw");
    }
    return grade(midterm,final, median(hw));
}

// this function computes the final grade for a Student_info object
// (S4.2.2/63)
double grade(const Student_info& s)
{
    return grade(s.midterm, s.final, s.homework);
}