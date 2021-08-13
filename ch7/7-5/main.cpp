#include <iostream>
#include "gen_sentence.h"
using namespace std;

int main()
{
    //read the grammar and generate the sentence
    list<string> sentence=gen_sentence(read_grammar());
    //output the first word, if any
    list<string>::const_iterator it=sentence.begin();
    if(!sentence.empty())
    {
        cout<<*it;
        ++it;
    }
    //output the others
    while(it!=sentence.end())
    {
        cout<<" "<<*it;
        ++it;
    }
    cout<<endl;
    return 0;
}