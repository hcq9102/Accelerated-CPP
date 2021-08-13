//
// Created by Q on 12/30/2020.
//

// source file for `Student_info'-related functions
#include "student_info.h"

using std::istream;  using std::vector;

bool compare(const student_info& x, const student_info& y) {
    return x.name < y.name;
}

istream& read(istream& is, student_info& s) {
    // read and store the student's name and midterm and final exam grades
    is >> s.name >> s.midterm >> s.final;
    read_hw(is, s.homework);  // read and store all the student's homework grades
    return is;
}

// read homework grades from an input stream into a `vector<double>'
istream& read_hw(istream& in, vector<double>& hw) {
    if (in) {
        // get rid of previous contents
        hw.clear();

        // read homework grades
        double x;
        while (in >> x)
            hw.push_back(x);

        // clear the stream so that input will work for the next student
        in.clear();
    }

    return in;
}