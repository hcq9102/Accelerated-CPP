#include <iostream>
#include "template.h"
#include <vector>
#include <string>

using namespace std;

int main() {
    // test my equal
    vector<double> test = {10.0, 20.0, 30.0, 40.0, 50.0};
    vector<double> actual_1 ={10.0, 20.0, 30.0, 40.0, 50.0};
    vector<double>::iterator b = test.begin();
    vector<double>::iterator e = test.end();
    vector<double>::iterator b2 = actual_1.begin();
    bool a = my_equal(b, e, b2);

    return 0;
}
