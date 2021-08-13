/*
#include <iostream>
#include <algorithm>

#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    //enter  name
    cout<<"please enter your name: ";
    string name;
    cin>>name;
    cout<<"hello "<<name <<endl;
    // enter midterm and final grades
    cout<<"please enter your midterm and final grades: ";
    double midterm, final;
    cin >> midterm >>final;

    //enter homework
    cout<< "please enter your homework grades "<<endl;
    double x;
    vector<double> homework;
    //readin homework
    read_hw(cin, homework);

    //calculate total grade
    try {
        double final_grade = grade(midterm, final, homework);
        streamsize prec = cout.precision();
        cout << "your final grades is: " << setprecision(3)
             << final_grade << setprecision(prec) << endl;
    }catch(domain_error){
        cout<<endl<<"you must enter your grades. " "please try again."<<endl;
        return 1;
    }
    return 0;
}

*/

/*
//2. 含有struct 的数据组织
#include <iomanip>
#include <string>
#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>
using namespace std;

struct Student_info{
    string name;
    double midterm, finals;
    vector<double> homework;
};

double grade (double midterm, double finals, double homework){
    return 0.2 * midterm + 0.4*finals + 0.4*homework;
}

double median(vector<double> vec){
    typedef vector<double> ::size_type vec_sz;
    vec_sz size = vec.size();
    if(size==0){
        throw domain_error("median of empty vector");
    }
    sort(vec.begin(),vec.end());
    vec_sz mid = size/2;
    return size%2==0? (vec[mid]+vec[mid-1])/2 : vec[mid];
}
double grade(double midterm, double finals, const vector<double>& hw){
    if(hw.size()==0)
        throw domain_error("student has no homework");
    return grade(midterm,finals,median(hw));
}
istream& read_hw(istream& in, vector<double>& hw){
    if(in){
        hw.clear();
        double x;
        while(in>>x){
            hw.push_back(x);
        }
        in.clear();
    }
    return in;
}

//new things
istream& read(istream& is,Student_info& s ){
    is>>s.name>>s.midterm>>s.finals;
    read_hw(is,s.homework);

    return is;
}
//grade 的一个重载
double grade(const Student_info& s){
    return grade(s.midterm,s.finals,s.homework);
}

bool compare(const Student_info& x, const Student_info& y){
    return x.name<y.name;
}
int main(){
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen =0;
    cout<<"please enter your name,  midterm and final grades and homeworks: ";
    while(read(cin,record)){
        maxlen = max(maxlen,record.name.size());
        students.push_back(record);
    }
    sort(students.begin(), students.end(),compare);
    for(vector<Student_info>::size_type i =0 ;i!=students.size(); ++i){
        cout<< students[i].name << string(maxlen +1 - students[i].name.size(),' ');

        try {
            double final_grade = grade(students[i]);
            streamsize prec = cout.precision();
            cout << "your final grades is: " << setprecision(3)
                 << final_grade << setprecision(prec) << endl;
        }catch(domain_error e){
            cout<<e.what();
        }
        cout<<endl;

    }
    return 0;
}

*/

//最后把所有模块整合后
#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include "grade.h"
#include "Student_info.h"

using std::cin;
using std::cout;
using std::endl;
using std::domain_error;
using std::max;
using std::setprecision;
using std::sort;
using std::streamsize;
using std::string;
using std::vector;

int main()
{
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;   // the length of the longest name

    // read and store all the student's data.
    // Invariant:   students contain all the student records read so far
    //              maxlen contains the length of the longest name in students
    while (read(cin, record))
    {
        // find the length of longest name
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    }

    // alphabetize the student records
    sort(students.begin(), students.end(), compare);

    // write the names and grades
    for (vector<Student_info>::size_type i = 0;
         i != students.size(); ++i)
    {
        //write the name, padded on teh right to maxlen + 1 characters
        cout << students[i].name
             << string(maxlen + 1 - students[i].name.size(), ' ');

        //compute and write the grade
        try
        {
            double final_grade = grade(students[i]);
            streamsize prec = cout.precision();
            cout << setprecision(3) << final_grade
                 << setprecision(prec);
        }
        catch (domain_error e)
        {
            cout << e.what();
        }
        cout << endl;
    }
    return 0;
}


