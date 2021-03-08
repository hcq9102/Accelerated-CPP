//
// Created by Q on 1/11/2021.
//

#ifndef INC_6_2_FINDURL_FIND_URL_H
#define INC_6_2_FINDURL_FIND_URL_H
#include <vector>
#include <string>
#include <iterator>
bool not_url_char(char c);

std::string::const_iterator url_end(std::string::const_iterator b,std::string::const_iterator e);
std::string::const_iterator url_beg(std::string::const_iterator b,std::string::const_iterator e);

void find_urls(std::vector<std::string>& v, const std::string& s);

#endif //INC_6_2_FINDURL_FIND_URL_H
