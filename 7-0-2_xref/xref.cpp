//one word show in which lines
#include <iostream>
#include "xref.h"

using namespace std;

map<string, vector<int> > xref(istream& in, vector<string> find_words(const string&)){
    string line;
    int line_number = 0;
    map<string, vector<int> > ret;
   //read next line
    while(getline(in,line)){
        ++line_number;
        //split the input line into words
        vector<string> words = find_words(line);
        // record every words in current line
        for(vector<string>::const_iterator it = words.begin(); it!=words.end(); it++){
            ret[*it].push_back(line_number);
        }
    }
    return ret;
}

