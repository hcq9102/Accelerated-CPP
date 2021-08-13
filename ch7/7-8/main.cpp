#include <iostream>
#include "find_url.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <fstream>

#include "find_url.h"
#include "xref.h"
using namespace std;

int main()
{
    fstream infile;
    infile.open("7-8test.txt");
    map<std::string, vector<int> > ret = xref(infile, find_urls);

    cout << std::endl;
    string::size_type maxlen = 0;
    for (map<string, vector<int> >::const_iterator it = ret.begin();
         it != ret.end(); ++it) {
        maxlen = max(maxlen, it->first.size());
    }

    for (map<std::string, vector<int> >::const_iterator it = ret.begin();
         it != ret.end(); ++it) {
        cout << it->first << string(maxlen - it->first.size(), ' ')
                  << " occurs on line(s): ";

        vector<int>::const_iterator line_it = it->second.begin();
        cout << *line_it;

        ++line_it;

        while (line_it != it->second.end()) {
            cout << ", " << *line_it;
            ++line_it;
        }

        cout << endl;
    }

    return 0;
}