
#ifndef INC_7_8_XREF_H
#define INC_7_8_XREF_H
#include <map>
#include <string>
#include <vector>
#include <cctype>

bool space(char );
bool not_space(char );
std::vector<std::string> split(const std::string& );

std::map<std::string, std::vector<int> >xref(std::istream& in,
     std::vector<std::string> find_words(const std::string& ) = split);
#endif //INC_7_8_XREF_H
