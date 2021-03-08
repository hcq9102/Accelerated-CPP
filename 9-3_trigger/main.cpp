// reference 9-0

#include <iostream>
#include "Student_info.h"
#include "grade.h"
#include <vector>
#include <string>
#include <algorithm>
#include <stdexcept>
#include <iomanip>

using namespace std;
/*
int main() {
    //9-3-1 just trigger
    Student_info record;
    record.grade();

    return 0;
}
*/

// 9-3-2 catch
int main() {
    //catch
    Student_info record;

    try{
        record.grade();
    }catch (domain_error e){
        cout << e.what();
    }
    return 0;
}
