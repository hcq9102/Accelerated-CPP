#include <iostream>
#include <vector>
#include <string>

#include "Pic.h"

using namespace std;

int main() {
    vector<string> t = {"yellow ", "blue", "green "," pink"};
    Picture p = t;
    Picture q = frame(p);
    Picture r = hcat(p, q);
    Picture s = vcat(q, r);
    cout << frame(hcat(s, vcat(r, q))) << endl;
    return 0;
}
