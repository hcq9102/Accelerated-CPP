#include <iostream>
#include <vector>
#include <string>

#include "Pic.h"

using namespace std;

int main() {
    vector<string> t1 = {"how", "are you doing", "!!!" };
    vector<string> t2 = {"I am doing", "great", "thanks"};

    cout << frame(t1) << endl;

    cout << frame(t2) << endl;

    cout << hcat(frame(t1), t2) << endl;

    cout << vcat(t1, frame(t2)) << endl;
    return 0;
}
