//
// Created by Q on 1/3/2021.
//

#include "Student_info.h"
#include "Student_group.h"
#include "grade.h"

// separate passing and failing student records
// derived from S5.5/85
Student_group extract_fails(Student_group& students)
{
    Student_group fail;
    Student_group::iterator iter = students.begin();
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