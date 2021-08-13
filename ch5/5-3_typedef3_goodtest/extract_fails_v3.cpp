//
// Created by Q on 1/3/2021.
//

#include "Student_info.h"
#include "grade.h"
#include <vector>

using std::vector;

// separate passing and failing student records
// version 3: iterators but no indexing; still potentially slow
// (S5.3/82)
vector<Student_info> extract_fails(vector<Student_info>& students)
{
    vector<Student_info> fail;
    vector<Student_info>::iterator iter = students.begin();
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