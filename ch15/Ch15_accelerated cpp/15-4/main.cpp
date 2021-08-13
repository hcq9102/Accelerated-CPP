#include <iostream>
#include <vector>
#include <string>

#include "Pic.h"

using namespace std;

int main() {
    vector<string> t = {"yellow", "blue", "red"};
    Picture p = t;
    Picture q = frame(p, '+', '=', '!');
    Picture r = hcat(p, q);
    Picture s = vcat(q, r);
    Picture w = frame(hcat(s, vcat(r, q)));
    w.reframe('%', '*', '&');
    cout << w << endl;
    return 0;
}
