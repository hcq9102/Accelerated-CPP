//
// Created by Q on 2/2/2021.
//

#include "grade_aux.h"
#include "Student_info.h"
#include "grade.h"
#include <stdexcept>

using namespace std;

double grade_aux(const Student_info &s) {
    try{
        return grade(s);
    } catch(domain_error){
        return grade(s.midterm, s.final, 0);
    }
}