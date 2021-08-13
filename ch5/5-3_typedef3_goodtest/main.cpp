#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "Student_info.h"
#include "grade.h"

// ********************** AMEND THIS  *************************
// Solution to Exercise 5-3: Pick one of the followings (v3 or v4)
// #include "extract_fails_v3.h"      // vector<Student_info>
#include "extract_fails_v4.h"      // list<Student_info>
// ************************************************************

using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::string;
using std::vector;
using std::list;

int main()
{

    // ********************* AMEND THIS ***************************
    // Solution to Exercise 5-3: Pick one of the followings
    //typedef vector<Student_info> Student_group;
    typedef list<Student_info> Student_group;
    // ************************************************************

    Student_group students;
    Student_info record;

    // read and store all the student's data.
    while (read(cin, record))
        students.push_back(record);

    // Extract the failed students
    Student_group students_failed = extract_fails(students);

    // sort vector and sort list are different
    // so we remove from here for now.

    cout << endl;

    // Report passing students
    cout << "These students have passed." << endl;
    for (Student_group::const_iterator iter = students.begin();
         iter != students.end(); ++iter)
        cout << iter->name << " (" << grade(*iter) << ")" << endl;

    cout << endl;

    // Report failing students
    cout << "These students have failed." << endl;
    for (Student_group::const_iterator iter = students_failed.begin();
         iter != students_failed.end(); ++iter)
        cout << iter->name << " (" << grade(*iter) << ")" << endl;

    return 0;
}