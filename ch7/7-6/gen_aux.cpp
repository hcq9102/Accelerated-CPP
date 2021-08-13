#include "gen_aux.h"
#include <vector>
#include <string>
#include "grammar.h"
#include "bracket.h"
#include <stdexcept>
#include "nrand.h"

using namespace std;

void gen_aux(const Grammar& g, const string& token, vector<string>& sentence, vector<string>& tokens) {
    if(!bracketed(token)){
        sentence.push_back(token);
    } else{
        // locate the rule that corresponds to token
        Grammar::const_iterator it = g.find(token);
        if(it == g.end())
            throw logic_error("empty rule");

        // fetch the set of possible rules
        const Rule_collection& c = it->second;

        // from which we select one at random
        const Rule& r = c[nrand(c.size())];

        // push rule's tokens onto stack of tokens
        for(Rule::const_reverse_iterator i = r.rbegin(); i != r.rend(); ++i){
            tokens.push_back(*i);
        }
    }

}
