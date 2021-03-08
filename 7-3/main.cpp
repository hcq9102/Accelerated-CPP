//The objective of this exercise is to only store non-duplicated line number.

//to adjust the xref function by adding a small bit of code.
// Include a if condition to check whether the line number already exists for the corresponding associative array.
// Use the find utility of the <algorithm> directive to help us do this.

#include <iostream>
#include "xref.h"
#include "split.h"
using namespace std;

int main()
{
    map<string,vector<int> > ret=xref(cin,split);
    for(map<string,vector<int> >::const_iterator it=ret.begin();it!=ret.end();++it)
    {
        cout<<it->first<<" occurs on line(s):"<<endl;
        vector<int>::const_iterator line_it=it->second.begin();
        cout<<*line_it;

        ++line_it;

        while(line_it!=it->second.end())
        {
            cout<<","<<*line_it;
            ++line_it;
        }
        cout<<endl;
    }
    return 0;
}