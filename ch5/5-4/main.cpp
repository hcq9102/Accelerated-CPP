/*
 * The objective is to further streamline the program, so that the only change required for switching
 * between running a vector-based and list-based workstream is a one-liner change at the declaration level.
 *
 * 1.Create a new Student_info.h to store the a new type Student_group (defined by typedef) – which may be either vector or list based. To switch between using vector-based Student_group or list-based Student_group, we just need to do a one-liner change in this file. All other files are intact.
2.Consolidate extract_fails_v3.cpp/.h (vector based) and extract_fails_v4.cpp/.h (list based) into one extract_fails.cpp/.h. (generic Student_group based)
3.Refresh the #include directives within the codes as required.
 *
 ！！！！！！用同一组10个人分别测试两次，一次list,一次vector，  只要修改Student_group.h里的typedef 栏，tests yield the same result.
Kate 88.88 88.88 88.88 88.88 88.88
John 55.55 55.55 55.55 55.55 55.55
Pat 66.66 66.66 66.66 66.66 66.66
Joe 100.00 100.00 100.00 100.00 100.00
Mary 11.11 11.11 11.11 11.11 11.11
Bill 33.33 33.33 33.33 33.33 33.33
Jay 22.22 22.22 22.22 22.22 22.22
Bob 4.00 4.00 4.00 4.00 4.00
Fred 77.77 77.77 77.77 77.77 77.77
Louis 44.44 44.44 44.44 44.44 44.44
 * */
#include <iostream>
#include "Student_info.h"
#include "Student_group.h" // switch between vector and list based Student_group here
#include "grade.h"
#include "extract_fails.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{

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