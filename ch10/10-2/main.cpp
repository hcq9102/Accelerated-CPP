#include <iostream>
#include "template.h"
#include <vector>
#include <iterator>

using namespace std;

int main() {
    double test1[] = {2.0, 3.0, 6.0, 7.0};
    double y = median<double, double*>(test1, end(test1));
    cout << y << endl;

    vector<double> v_test = {10, 9, 8, 7};
    double y_v = median<double, vector<double>::iterator>(v_test.begin(), v_test.end());
    cout << y_v << endl;
    return 0;
}