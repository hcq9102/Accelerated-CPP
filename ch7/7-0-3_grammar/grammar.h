
#ifndef INC_7_0_3_GRAMMAR_GRAMMAR_H
#define INC_7_0_3_GRAMMAR_GRAMMAR_H
#include <vector>
#include <map>
#include <string>
typedef std::vector<std::string> Rule;
typedef std::vector<Rule> Rule_collection;
typedef std::map<std::string,Rule_collection> Grammar;

Grammar read_grammar();
#endif //INC_7_0_3_GRAMMAR_GRAMMAR_H
