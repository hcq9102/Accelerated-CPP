#include "Core.h"
#include <iostream>
#include <vector>
#include "grade.h"

using namespace std;

istream& read_hw(istream& in, vector<double>& hw){
    if (in){
        hw.clear();

        double x;
        while(in >> x)
            hw.push_back(x);
        in.clear();
    }
    return in;
}
istream& Core::read_common(istream& in) {
    in >> n >> midterm >> final;
    return in;
}

istream& Core::read(istream& in) {
    read_common(in);
    read_hw(in, homework);
    return in;
}

istream& Grad::read(istream& in) {
    read_common(in);
    in >> thesis;
    read_hw(in, homework);
    return in;
}

bool compare(const Core& c1, const Core& c2) {
    return c1.name() < c2.name();
}

bool compare_Core_ptrs(const Core* cp1, const Core* cp2) {
    return compare(*cp1, *cp2);
}
