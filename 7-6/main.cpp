#include <iostream>
#include <vector>
#include <string>
#include "gen_sentence.h"
#include "grammar.h"
#include "nrand.h"
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(NULL)); //use or not will bring dif results
    // generate the sentence
    vector<string> sentence = gen_sentence(read_grammar(cin));

    // write the first word, if any
    vector<string>::const_iterator it = sentence.begin();
    if(!sentence.empty()){
        cout << *it;
        ++it;
    }

    // write the rest of words, each preceded by a space
    while(it != sentence.end()){
        cout << " " << *it;
        ++it;
    }
    cout << endl;

    return 0;
}