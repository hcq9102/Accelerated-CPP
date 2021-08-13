//
// Created by Q on 1/15/2021.
//

#ifndef INC_6_8_STUDENT_INFO_H
#define INC_6_8_STUDENT_INFO_H
#include <string>
#include <vector>

struct Student_info{
    std::string name;
    double midterm, final;
    std::vector<double> homework;
};

bool compare(const Student_info& x, const Student_info& y);
std::istream& read(std::istream& in, Student_info& s);
std::istream& read_hw(std::istream& in, std::vector<double>& v);

bool did_all_hw(const Student_info& s);
std::vector<Student_info> extract_fails(std::vector<Student_info>& s);

#endif //INC_6_8_STUDENT_INFO_H
