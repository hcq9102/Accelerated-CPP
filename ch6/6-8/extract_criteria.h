//
// Created by Q on 1/15/2021.
//

#ifndef INC_6_8_EXTRACT_CRITERIA_H
#define INC_6_8_EXTRACT_CRITERIA_H
#include <vector>
#include "Student_info.h"

std::vector<Student_info> extract_criteria(std::vector<Student_info>&, bool criteria(const Student_info&));
#endif //INC_6_8_EXTRACT_CRITERIA_H
