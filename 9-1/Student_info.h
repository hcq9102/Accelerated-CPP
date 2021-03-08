

#ifndef INC_9_1_STUDENT_INFO_H
#define INC_9_1_STUDENT_INFO_H
#include <iostream>
#include <string>
#include <vector>

class Student_info{
public:
    Student_info();
    Student_info(std::istream&);
    std::string name() const {return n;}
    bool valid() const {return !homework.empty();}
    std::istream& read(std::istream&);
    double grade() const;

private:
    std::string n;
    double midterm, final, g;
    std::vector<double> homework;
};

bool compare(const Student_info&, const Student_info&);
#endif //INC_9_1_STUDENT_INFO_H
