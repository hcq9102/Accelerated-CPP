#include <iostream>
#include <map>
#include <vector>
#include <string>
#include "xref.h"
#include "split.h"
#include <sstream>

using namespace std;


int main() {
    map<string, vector<int> > ret = xref(cin,split);

    // define the maximum line length
    const string::size_type max_length = 20;

    // write the result
    for(map<string, vector<int> >::const_iterator it = ret.begin(); it != ret.end(); ++it){
        ostringstream os;

        // write the word
        os << it->first << " occurs on the line(s): ";

        // followed by one or more line numbers
        vector<int>::const_iterator line_it = it->second.begin();
        os << *line_it;  // write the first line number

        ++line_it;

        // write the rest line numbers
        while(line_it != it->second.end()){
            // store line numbers into ostringstream object
            os << ", " << *line_it;
            ++line_it;
        }

        // get the contents from line_length
        string line_length = os.str();

        // write each line of output
        for(string::size_type i = 0; i != line_length.size(); ++i){
            cout << line_length[i];
            if((i + 1) % max_length == 0)
                cout << endl;
        }
        cout << endl;
    }
    return 0;
}