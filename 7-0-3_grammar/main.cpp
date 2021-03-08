#include <iostream>
#include "generate_sentence.h"
using namespace std;

int main()
{
    //read the grammar & generate the sentence
    vector<string> sentence = generate_sentence(read_grammar());
    //if have,output the first word
    vector<string>::const_iterator it = sentence.begin();
    if(!sentence.empty())
    {
        cout<<*it;
        ++it;
    }
    //output the others if any
    while(it!=sentence.end())
    {
        cout<<" "<<*it;
        ++it;
    }
    cout<<endl;
    return 0;
}