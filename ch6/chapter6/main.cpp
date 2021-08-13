
//6.1
/* use a for cycle to connect two pictures;
 *
 * for(vector<string>::const_iterator it = bottom.begin(); it !=bottom.end(); it++){
 *      res.push_back(*it);
 * }
 *
 * */

//copy(m.begin() , m.end() ,back_inserter(v))
// copy(begin, end,out)
#include <iostream>
#include<iterator>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v1 = {1,2,3};
    vector<int> v2 = {4,5,6};
    std::copy(v1.begin(),v1.end(),std::back_inserter((v2)));
    // v2 now is: 4 5 6 1 2 3
    cout <<"v1 = ";

    for(int i =0; i<3; i++){
        cout<<v1[i]<<" ";
    }
    cout << "\nv2 = ";
    for (int i = 0; i < 6; ++i) {
        cout << v2[i] << " ";
    }
    return 0;
}