//main.cpp
#include "str_join.h"
#include <iostream>
using namespace std;

int main()
{
    string str;
    vector<string> vec;
    vector<string> vec_frm;
    vector<string> vec_join;

    while(getline(cin,str))
        vec.push_back(str);
    vec_frm=frame(vec);

    vec_join=hcat(vec,vec_frm);

    for(vector<string>::const_iterator it=vec_join.begin();it!=vec_join.end();++it)
    {
        cout<<endl<<*it<<endl;
    }

    return 0;
}