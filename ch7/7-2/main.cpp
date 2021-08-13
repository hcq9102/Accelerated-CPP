#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <ios>
#include <map>
#include "Student_info.h"
#include "grade.h"
#include "gradeLevel.h"

using namespace std;


int main()
{
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;

    // read and store
    while(read(cin, record)){
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    }

    sort(students.begin(), students.end(), compare);

    map<char, int> counters; //string 改成char
    for(vector<Student_info>::size_type i = 0; i != students.size(); ++i){
        double final_grade = grade(students[i]);
        char level = gradeLevel(final_grade);//string 改成char
        ++counters[level];
    }

    for(map<char, int>::const_iterator it = counters.begin(); it != counters.end(); ++it){//string 改成char
        cout << it->first << " level : " << it->second <<" student(s)"<< endl;
    }

    return 0;
}
