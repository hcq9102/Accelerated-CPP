//
// Created by Q on 1/5/2021.
//

//updown.cpp
#include "updown.h"
using namespace std;

bool is_updown(const string& word)
{
    typedef string::size_type size_tp;
    size_tp size=word.size();
    for(size_tp i=0;i<size;++i)
    {
        if(word[i]=='d' || word[i]=='f' || word[i]=='h' || word[i]=='k' || word[i]=='l' ||
           word[i]=='t' || word[i]=='g' || word[i]=='j' || word[i]=='p' || word[i]=='q' || word[i]=='y')
            return true;
    }
    return false;
}