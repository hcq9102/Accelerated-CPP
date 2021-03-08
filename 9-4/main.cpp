#include <iostream>
#include "Student_info.h"
#include "grade.h"
#include <vector>
#include <string>
#include <algorithm>
#include <stdexcept>
#include <iomanip>

using namespace std;
int main() {
    Student_info record;
    if(record.valid())
        record.grade();
    return 0;
}