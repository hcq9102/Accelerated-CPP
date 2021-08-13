//
// Created by Q on 1/3/2021.
//

#ifndef GUARD_Student_info_
#define GUARD_Student_info_

// `Student_info.h' header file
#include <iostream>
#include <string>
#include <vector>

struct Student_info {
    std::string name;
    double midterm, final;
    std::vector<double> homework;
};

bool compare(const Student_info&, const Student_info&);
std::istream& read(std::istream&, Student_info&);
std::istream& read_hw(std::istream&, std::vector<double>&);
#endif
