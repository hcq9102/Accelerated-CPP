//
// Created by Q on 1/19/2021.
//

#ifndef INC_7_5_GRAMMAR_H
#define INC_7_5_GRAMMAR_H
#include <list>
#include <map>
#include <string>
typedef std::list<std::string> Rule;
typedef std::list<Rule> Rule_collection;
typedef std::map<std::string,Rule_collection> Grammar;

Grammar read_grammar();
#endif //INC_7_5_GRAMMAR_H
