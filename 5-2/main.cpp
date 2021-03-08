
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <conio.h>

#include "student_info.h"
#include "grade.h"

//driver program for grade partitioning examples

using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::string;
using std::vector;
using std::max;
using std::ifstream;
using std::ofstream;

vector<student_info> extract_fails(vector<student_info>&students) {
    vector<student_info> fail;
#ifdef _MSC_VER
    std::vector<Student_info>::iterator iter = students.begin();
#else
    vector<student_info>::iterator iter = students.begin();
#endif

    while (iter != students.end()) {
        if (fgrade(*iter)) {
            fail.push_back(*iter);
            iter =students.erase(iter);
        } else
            ++iter;
    }

    return fail;
}

int main() {
    vector<student_info> vs;
    student_info s;
    string::size_type maxlen = 0;

    ifstream infile;
    infile.open("10.txt"); //Elapsed:15
    //infile.open("1000.txt"); //Elapsed:484
    //infile.open("10000.txt"); //Elapsed:43297
    if(!infile.is_open()){
        cout<<"can not open the file..."<<std::endl;
        getch();
        exit(1);
    }

    while (read(infile, s)) {
        maxlen =max(maxlen, s.name.size());
        vs.push_back(s);
    }

    sort(vs.begin(),vs.end(), compare);

    clock_t start =clock();
    vector<student_info> fails = extract_fails(vs);
    clock_t elapsed =clock() - start;

    cout << "Elapsed: " << elapsed <<endl;

    //  for (int i = 0; i< fails.size(); ++i)
    //    cout <<fails[i].name << " " << grade(fails[i]) << endl;

    getch();
    return 0;
}