#include "extract_criteria.h"
#include "Student_info.h"
#include <algorithm>
#include <vector>
using namespace std;
vector<Student_info> extract_criteria(std::vector<Student_info>& students, bool criteria(const Student_info&)){
    vector<Student_info>::iterator iter = stable_partition(students.begin(),students.end(),criteria);
    vector<Student_info> extracted(students.begin(),iter);
    students.erase(students.begin(),iter);
    return extracted;
}

