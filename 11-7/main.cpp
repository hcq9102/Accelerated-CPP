/*
 Ans：因为需要判断学生是否做了家庭作业，故需要在11-6基础上添加判断容器vector<double> homework是否为空的empty()成员函数，
bool empty() const { return data == avail; }

 */
#include <iostream>
#include "student_info.h"
#include <stdexcept>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    Vec<Student_info> students;
    Student_info record;
    string::size_type maxlen=0;

    while(record.read(cin))
    {
        maxlen=max(maxlen,record.name().size());
        students.push_back(record);
    }

    sort(students.begin(),students.end(),compare);

    for(Vec<Student_info>::size_type i=0;i!=students.size();++i)
    {
        cout<<students[i].name()<<string(maxlen+1-students[i].name().size(),' ');
        try
        {
            double total=students[i].grade();
            streamsize prec=cout.precision();
            cout<<setprecision(3)<<total<<setprecision(prec)<<endl;
        }
        catch(domain_error e)
        {
            cout<<e.what()<<endl;
        }
    }
    return 0;
}