#include <iostream>
#include "Vec.h"
#include "Str.h"
#include "Pic.h"

using namespace std;

int main() {
    Vec<Str> t1;
    t1.push_back("yellow");
    t1.push_back("blue");
    t1.push_back("red");

    Picture p = t1;
    Picture q = frame(p);
    Picture r = hcat(p, q);
    Picture s = vcat(q, r);
    cout << frame(hcat(s, vcat(r, q))) << endl;
    return 0;
}