#include "gen_sentence.h"
#include <vector>
#include <string>
#include "grammar.h"
#include "gen_aux.h"

using namespace std;

vector<string> gen_sentence(const Grammar& g) {
    vector<string> sentence;
    vector<string> tokens;
    tokens.push_back("<sentence>");

    while(!tokens.empty()){
        string token = tokens.back();
        tokens.pop_back();
        gen_aux(g,token, sentence, tokens);

    }
    return sentence;
}
