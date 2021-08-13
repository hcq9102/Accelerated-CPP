#include <iostream>
#include "find_url.h"
#include <fstream>
using namespace std;

int main()
{
    ifstream infile;
    infile.open("/Users/Q/Desktop/TestFile/6-2test.txt",ios::in);
    if(!infile.good())
    {
        cout<<"file open error";
        return -1;
    }

    vector<string> v;
    string line;
    while(getline(infile,line))
    {
        find_urls(v,line);
    }
    cout<<"the urls in the txt is:"<<endl;
    for(vector<string>::const_iterator i=v.begin();i!=v.end();++i)
    {
        cout<<*i<<endl;
    }
    return 0;
}