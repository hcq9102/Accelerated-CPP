#include <iostream>
#include <fstream>
#include "split.h"
#include "grammar.h"

using namespace std;
Grammar read_grammar(){ // read grammar rule
    Grammar ret;
    string line;
    ifstream infile;
    infile.open("/Users/Q/Desktop/TestFile/7-0-3GramTest.txt",ios::in);
    if(!infile.good()){
        cout<<"Error when read file";
        return ret;
    }
    while(getline(infile,line)){
        vector<string> entry = split(line);
        if(!entry.empty()){
            ret[entry[0]].push_back(Rule(entry.begin()+1, entry.end()));
        }
    }
    infile.close();
    return ret;
}
