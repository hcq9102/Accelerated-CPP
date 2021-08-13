

#ifndef INC_7_0_3_GRAMMAR_GENERATE_SENTENCE_H
#define INC_7_0_3_GRAMMAR_GENERATE_SENTENCE_H
#include "grammar.h"
bool bracketed(const std::string& s);
int nrand(int n);

void gen_aux(const Grammar& g, const std::string& word, std::vector<std::string>& ret);
std::vector<std::string> generate_sentence(const Grammar& g);

#endif //INC_7_0_3_GRAMMAR_GENERATE_SENTENCE_H
