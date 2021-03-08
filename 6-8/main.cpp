//这题，只是根据条件分类来push_back，然后就是分别调用，为了让读者更熟悉这种算法吧。

#include <iostream>                      // cin, cout, endl
#include <vector>                        // vector
#include "Student_info.h"                // Student_info
#include "extract_criteria.h"           // extractOnCriteria
#include "grade.h"                       // grade
using namespace std;
int main(){
    vector<Student_info> students;
    Student_info student;
    //read records
    while(read(cin,student)){
        students.push_back(student);
    }
    //classify who did and who didnt do all hw
    vector<Student_info> didnt = students;
    vector<Student_info> did = extract_criteria(didnt, did_all_hw);

    cout<<" the following did all hw:"<<endl;
    for(vector<Student_info>::iterator i = did.begin(); i !=did.end(); i++){
        cout <<(*i).name <<endl;
    }
    cout<<" the following didnt do all hw:"<<endl;
    for(vector<Student_info>::iterator i = didnt.begin(); i !=didnt.end(); i++){
        cout <<(*i).name <<endl;
    }
    //classify pass and fail
    vector<Student_info> pass = students;
    vector<Student_info> fail = extract_criteria(pass, fgrade);

    cout << "The following students fail: " << endl;
    for(vector<Student_info>::iterator i = fail.begin(); i != fail.end(); ++i){
        cout << (*i).name << endl;
    }

    cout << "The following students pass: " << endl;
    for(vector<Student_info>::iterator i = pass.begin(); i != pass.end(); ++i){
        cout << (*i).name << endl;
    }
    return 0;

}