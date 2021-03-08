
#ifndef INC_7_5_GEN_SENTENCE_H
#define INC_7_5_GEN_SENTENCE_H
#include "grammar.h"

bool bracketed(const std::string& s);
int nrand(int n);

void gen_aux(const Grammar& g,const std::string& word,std::list<std::string>& ret);
std::list<std::string> gen_sentence(const Grammar& g);

#endif //INC_7_5_GEN_SENTENCE_H
