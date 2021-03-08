//
// Created by Q on 1/3/2021.
//

#ifndef INC_5_3_TYPEDEF_STUDENT_INFO_H
#define INC_5_3_TYPEDEF_STUDENT_INFO_H
#include <iostream>
#include <vector>
#include <string>

struct student_info{
    std::string name;
    double midterm, final;
    std::vector<double> homework;
};

std::istream& read(std::istream& is, student_info&);
std::istream& read_hw(std::istream& is, std::vector<double>& hw);
bool compare(const student_info&, const student_info&);
#endif //INC_5_3_TYPEDEF_STUDENT_INFO_H
