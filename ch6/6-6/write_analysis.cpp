#include <iostream>
#include <vector>
#include <string>
#include "Student_info.h"
#include "doAnalysis.h"

using namespace std;

void write_analysis(ostream& out,const string& name, double useGradeScheme(const Student_info&), const vector<Student_info>& did,const vector<Student_info>& didnt){
    out << name <<" : median(did) = "<< doAnalysis(did,useGradeScheme)<<
            " median(didnt) = " << doAnalysis(didnt,useGradeScheme)<<endl;
    return;
}
