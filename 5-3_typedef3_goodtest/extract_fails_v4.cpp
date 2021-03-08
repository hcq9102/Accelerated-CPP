//
// Created by Q on 1/3/2021.
//

#include "Student_info.h"
#include "grade.h"
#include <list>

using std::list;

// separate passing and failing student records
// version 4: use list instead of vector (essentially the same as version 3 otherwise)
// (S5.5/85)
list<Student_info> extract_fails(list<Student_info>& students)
{
    list<Student_info> fail;
    list<Student_info>::iterator iter = students.begin();
    while (iter != students.end())
    {
        if (fgrade(*iter))
        {
            fail.push_back(*iter);
            iter = students.erase(iter);
        }
        else
            ++iter;
    }
    return fail;
}