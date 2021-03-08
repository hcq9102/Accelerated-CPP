
#ifndef INC_7_6_GRAMMAR_H
#define INC_7_6_GRAMMAR_H

#include <iostream>
#include <vector>
#include <string>
#include <map>

typedef std::vector<std::string> Rule;
typedef std::vector<Rule> Rule_collection;
typedef std::map<std::string, Rule_collection> Grammar;

Grammar read_grammar(std::istream &);

#endif //INC_7_6_GRAMMAR_H
