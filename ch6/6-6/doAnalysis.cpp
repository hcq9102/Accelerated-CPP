#include <vector>
#include "median.h"
#include "Student_info.h"
#include <algorithm>

using std::transform;
using std::vector;

double doAnalysis(const vector<Student_info>& students, double useGradeScheme(const Student_info& )){
    vector<double> grades;
    transform(students.begin(),students.end(),back_inserter(grades),useGradeScheme);
    return median(grades);
}

