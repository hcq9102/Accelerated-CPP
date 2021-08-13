/*
 * 1.The first statement of the code fragment creates an empty vector<string> v.
2.The second statement of the code fragment attempts to frame this empty vector<string> v.
3.When we apply frame(v), the width function returns a maxlen of 0 (i.e. the initialised maxlen value) – i.e.
 implying no elements in v.
4.The frame function by default however, always return a top and bottom border of four asterisks (*).
 So even though the for loop within the frame function processes an empty vector<string> v,
 at a minimum, frame(v) should return the top and bottom borders.
 i.e. element 0 contains “****”, and element 1 contains “****”. This is it!
 * */
#include <iostream>
#include <string>      // string
#include <vector>      // vector
#include <algorithm>   // max

using std::string;
using std::vector;
using std::max;
using std::cin;
using std::cout;
using std::endl;

string::size_type width(const vector<string>& v)
{
    string::size_type maxlen = 0;
    for(vector<string>::size_type i = 0; i != v.size(); ++i)
        maxlen = max(maxlen, v[i].size());
    return maxlen;
}

vector<string> frame(const vector<string>& v)
{
    vector<string> ret;
    string::size_type maxlen = width(v);
    string border(maxlen + 4, '*');

    // write the top border
    ret.push_back(border);

    // write each interior row, bordered by an asterisk and a space
    for (vector<string>::size_type i = 0; i != v.size(); ++i)
        ret.push_back("* " + v[i] + string(maxlen - v[i].size(), ' ') + " *");

    // write the bottom border
    ret.push_back(border);

    return ret;
}

int main()
{
    string s;            // line
    vector<string> v;    // paragraph
    while (getline(cin, s))
        v.push_back(s);

    vector<string> framedV = frame(v);

    for (vector<string>::const_iterator iter = framedV.begin();
         iter != framedV.end(); ++iter)
    {
        cout << (*iter) << endl;
    }

    return 0;
}