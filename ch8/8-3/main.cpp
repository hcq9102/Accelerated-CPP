#include <iostream>
#include <vector>
#include "template.h"

using namespace std;

int main() {
    vector<double> test = {1.0, 2.0, 9.0, 4.2};
    cout << "the median is: " << median(test.begin(), test.end());
    return 0;
}

/*
 we cannot use the iterator to instead the vector,because it can change the values and unsecurity,
 and we shoud modify many place of the program,it is not worthing.
Ans：不可以，用迭代器代替向量，会导致students记录被修改的不安全隐患，且修改量大；修改后避免了按值传递当处理当量数据时会提升性能。

 * */