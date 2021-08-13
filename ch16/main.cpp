#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

#include "Student_info.h"
#include "Pic.h"

using namespace std;

Picture histogram(const vector<Student_info>& students){
    Picture names;
    Picture grades;

    // for each student
    for (vector<Student_info>::const_iterator it = students.begin(); it != students.end(); ++it){

        // create vertically names and grades
        names = vcat(names, vector<string>(1, it->name()));
        grades = vcat(grades,  vector<string>(1, " " + string(it->grade() / 5, '=')));
    }
    // horizontally concatenate the name and grades
    return hcat(names, grades);
}

int main() {
    vector<Student_info> students;
    Student_info s;

    while(s.read(cin))
        students.push_back(s);

    sort(students.begin(), students.end(), Student_info::compare);

    cout << frame(histogram(students)) << endl;
    return 0;
}
