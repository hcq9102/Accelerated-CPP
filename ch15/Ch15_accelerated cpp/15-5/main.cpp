#include <iostream>
#include <vector>
#include <string>

#include "Pic.h"

using namespace std;

int main() {
    vector<string> t1 = {"red", "yellow", "blue"};
    vector<string> t2 ={"and", "or", "Xor","cloudy"};
    Picture p = t1;
    Picture q = t2;

    cout << hcat(p, q) << endl;

    cout << hcat(q, p) << endl;
    return 0;
}
