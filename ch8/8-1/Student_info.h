//
// Created by Q on 2/2/2021.
//

#ifndef INC_8_1_STUDENT_INFO_H
#define INC_8_1_STUDENT_INFO_H

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
#endif //INC_8_1_STUDENT_INFO_H
