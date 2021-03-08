/*
 #include "LettGrade.h"
#include <string>

using namespace std;

string LettGrade(double grade) {
    string ret;
    if (grade >= 90.0)
        ret = "A";
    else if(grade < 90.0 && grade >= 80.0)
        ret = "B";
    else if(grade < 80.0 && grade >= 70.0)
        ret = "C";
    else if(grade < 70.0 && grade >= 60.0)
        ret = "D";
    else
        ret = "F";
    return ret;
}

 * */


#include "gradeLevel.h"
using namespace std;

char gradeLevel(double grade) {
    char level;
    if (grade >= 90.0)
        level = 'A';
    else if(grade < 90.0 && grade >= 80.0)
        level = 'B';
    else if(grade < 80.0 && grade >= 70.0)
        level = 'C';
    else if(grade < 70.0 && grade >= 60.0)
        level = 'D';
    else
        level = 'F';
    return level;
}
