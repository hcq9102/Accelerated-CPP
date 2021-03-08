#include <iostream>
#include <vector>
#include <string>
#include "Student_info.h"
#include "did_all_hw.h"
#include "grade_aux.h"
#include "average_grade.h"
#include "optimistic.h"
#include "template.h"


using namespace std;
int main() {
    vector<Student_info> did, didnt;
    Student_info student;

    cout << "Enter student information: " << endl;

    // read all records and separating
    while(read(cin, student)){
        if(did_all_hw(student))
            did.push_back(student);
        else
            didnt.push_back(student);
    }
    // check that both groups contain data
    if(did.empty()){
        cout << "No students did all the homework!" << endl;
        return 1;
    }

    if(didnt.empty()){
        cout << "Every students did all the homework!" << endl;
        return 1;
    }
    // do the analyses
    write_analysis(cout, "median", grade_aux, did, didnt);
    write_analysis(cout, "average", average_grade, did, didnt);
    write_analysis(cout, "optimistic", optimistic_median, did, didnt);
    return 0;
}
