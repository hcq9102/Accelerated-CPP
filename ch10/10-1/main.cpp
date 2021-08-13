#include <iostream>
#include "Student_info.h"
#include "letter_grade.h"
#include <vector>
#include <string>
#include <algorithm>
#include <stdexcept>
#include "grade.h"
#include <iomanip>

using namespace std;
int main() {
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;

    // read and store data
    while(record.read(cin)){
        maxlen = max(maxlen, record.name().size());
        students.push_back(record);
    }

    //alphabetize students
    sort(students.begin(), students.end(), compare);

    // write the name and grade
    for(vector<Student_info>::size_type i = 0; i != students.size(); ++i){
        cout << students[i].name()
             << string(maxlen + 1 - students[i].name().size(), ' ');
        try{
            double final_grade =  students[i].grade();
            string final_letter = letter_grade(final_grade);
            cout << final_letter << endl;
        } catch (domain_error e){
            cout << e.what();
        }
    }
    return 0;
}