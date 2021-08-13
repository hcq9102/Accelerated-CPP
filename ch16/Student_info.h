//
// Created by Q on 3/28/2021.
//

#ifndef INC_16_0_STUDENT_INFO_H
#define INC_16_0_STUDENT_INFO_H

#include "Core.h"
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

class Student_info {
public:
    // constructors and copy control
    Student_info(): cp(0) { }
    Student_info(std::istream& is): cp(0) { read(is); }
    Student_info(const Student_info&);
    Student_info& operator=(const Student_info&);
    ~Student_info() { delete cp; }

    // operations
    std::istream& read(std::istream&);

    std::string name() const {
        if (cp) return cp->name();
        else throw std::runtime_error("uninitialized Student");
    }
    double grade() const {
        if (cp) return cp->grade();
        else throw std::runtime_error("uninitialized Student");
    }

    static bool compare(const Student_info& s1,
                        const Student_info& s2) {
        return s1.name() < s2.name();
    }

private:
    Core* cp;
};
#endif //INC_16_0_STUDENT_INFO_H
