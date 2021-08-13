

#ifndef INC_9_0_STUDENT_INFO_H
#define INC_9_0_STUDENT_INFO_H
#include <vector>
#include <istream>
#include <string>
class Student_info
{
public:
    Student_info(std::istream&);
    Student_info();
    std::string name() const
    {
        return n;
    }
    bool valid() const
    {
        return !homework.empty();
    }

    std::istream& read(std::istream&);
    double grade() const;

private:
    std::string n;
    double midterm,fin;
    std::vector<double> homework;

};
bool compare(const Student_info&,const Student_info&);

#endif //INC_9_0_STUDENT_INFO_H
