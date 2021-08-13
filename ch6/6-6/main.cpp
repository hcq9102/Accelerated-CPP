#include <iostream>                      // cin, cout, endl
#include <vector>

#include "Student_info.h"
#include "did_all_hw.h"                  // did_all_hw
#include "write_analysis.h"              // write_analysis

#include "grade_aux.h"                   // grade_aux
#include "average_analysis.h"               // average_grade
#include "optimistic_median.h"           // optimistic_median
#include "doAnalysis.h"

using namespace std;

int main(){
    // students who did and didn't do all their homework
    vector<Student_info> did, didnt;

    // read the student records and classify them
   Student_info student;
   while(read(cin,student)){
       if(did_all_hw(student))
           did.push_back(student);
       else
           didnt.push_back(student);
   }
    /*
     for(vector<Student_info>::const_iterator i=didnt.begin();i!=didnt.end();++i)
     {
         cout<<(*i).name<<" ";
     }
 */
    // show some hints when do the analysis
    if(did.empty())
    {
        cout<<"No student did all the homework!"<<endl;
        return 1;
    }
    if(didnt.empty())
    {
        cout<<"Every student did all the homework!"<<endl;
        return 1;
    }
    // do the analyses
    write_analysis(cout, "median", grade_aux, did, didnt);
    write_analysis(cout, "average", average_grade, did, didnt);
    write_analysis(cout, "median of homework turned in",optimistic_median, did, didnt);

    return 0;
}
