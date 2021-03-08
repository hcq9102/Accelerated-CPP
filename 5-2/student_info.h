//
// Created by Q on 12/30/2020.
//
#ifndef GUARD_student_info
#define GUARD_student_info

// `Student_info.h' header file
#include <iostream>
#include <string>
#include <vector>

struct student_info {
    std::string name;
    double midterm, final;
    std::vector<double> homework;
};

bool compare(const student_info&, const student_info&);
std::istream& read(std::istream&, student_info&);
std::istream& read_hw(std::istream&, std::vector<double>&);
#endif
