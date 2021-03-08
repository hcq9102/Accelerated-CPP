//
// Created by Q on 1/3/2021.
//
//student_info.h
#ifndef Student_info_H
#define Student_info_H
#include <string>
#include <vector>

class Student_info
{
public:
    std::string name;
    double midterm,final;
    std::vector<double> homework;
};

bool compare(const Student_info&, const Student_info&);
std::istream& read(std::istream&, Student_info&);
std::istream& read_hw(std::istream&, std::vector<double>&);
#endif // Student_info_