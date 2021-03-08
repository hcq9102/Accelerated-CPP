// modify 7-3 with if else clause
#include <iostream>
#include "xref.h"
#include "split.h"
using namespace std;

int main()
{
    // Call xref using split by default.
    map<string,vector<int> > ret=xref(cin,split);
    //  results
    for(map<string,vector<int> >::const_iterator it=ret.begin();it!=ret.end();++it)
    {
        // Find number of lines the word has appeared
        vector<int>::size_type  numLines = (it->second).size();
        // Write the word
        cout<<it->first<<" occurs on ";
        if(numLines==1)
            cout<<"line: ";
        else
            cout<<"lines: ";
        // Followed by one or more line numbers.
        vector<int>::const_iterator line_it=it->second.begin();
        cout<<*line_it; // write the first line number

        ++line_it;
        // Write the rest of the line numbers, if any.
        while(line_it!=it->second.end())
        {
            cout<<","<<*line_it;
            ++line_it;
        }
        cout<<endl;// Write a new line to separate each word from the next.
    }
    return 0;
}