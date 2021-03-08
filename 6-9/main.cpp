//需要连接字符串故想到用库算法accumulate(begin,end,string)，
// 第三个参数表示一字符串我们将其表示为：string s=accumulate(v.begin(),v.end(),string(""));

#include <iostream>
#include <vector>
#include<string>
#include <numeric>
#include <iterator>
using namespace std;

int main() {
    string s;
    vector<string> vstr;
    while(cin>>s){
        vstr.push_back(s);
    }
    string t(""); //initialize
    t = accumulate(vstr.begin(),vstr.end(),t);

    cout << endl <<t <<endl;
    return 0;
}

/*
#include <iostream>
#include <vector>
#include <numeric>
#include <string>

using namespace std;

int main() {
    string s = "apple";
    vector<string> vec(20, s);
    string ret =  accumulate(vec.begin(), vec.end(), string(""));
    cout << ret << endl;
    return 0;
}
 */