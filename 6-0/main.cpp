#include <iostream>
#include "optimistic_median_analysis.h"
#include "median_analysis.h"
#include "average_analysis.h"
using namespace std;

int main()
{
    vector<Student_info> did,didnt;
    Student_info st;
    while(read(cin,st))
    {
        if(did_all_hw(st))
            did.push_back(st);
        else
            didnt.push_back(st);
    }

    for(vector<Student_info>::const_iterator i=didnt.begin();i!=didnt.end();++i)
    {
        cout<<(*i).name<<" ";
    }

    //verify that the analysis will show us sonmething
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
    //do the analysis
    write_analysis(cout,"median",median_analysis,did,didnt);
    write_analysis(cout,"average",average_analysis,did,didnt);
    write_analysis(cout,"median of homework turned in",optimistic_median_analysis,did,didnt);

    return 0;
}