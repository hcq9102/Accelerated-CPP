//
// Created by Q on 1/10/2021.
//

#ifndef median_analysis_H
#define median_analysis_H
#include "Student_info.h"

double grade_aux(const Student_info& s);
double median_analysis(const std::vector<Student_info>& s);
void write_analysis(std::ostream& out,const std::string& name,double analysis(const std::vector<Student_info>&)
        ,const std::vector<Student_info>& did,const std::vector<Student_info>& didnt);

#endif // median_analysis_H