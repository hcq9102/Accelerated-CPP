#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


template <class In>
void my_reverse_0(In begin,In end)
{
    while(begin!=end)
    {
        --end;
        if(begin!=end)
        {
            typename In::value_type temp;
            temp=*begin++;//then begin's value is changed(direct to it next element)
            *begin=*end;
            *end=temp;
        }
    }

}



template <class In>
void my_reverse(In begin,In end)
{
    while(begin!=end)
    {
        --end;
        if(begin!=end)
        {
            swap(*begin++,*end);
        }
    }
}


int main() {
    vector<int> v0 = {1,2,3,4,5};
    //exchange b, e directly
    my_reverse_0(v0.begin(),v0.end());
    cout<< "直接交换后的结果： "<<endl;
    vector<int>::iterator i;
    for(i = v0.begin(); i!=v0.end(); i++){
        cout<< *i<<endl;
    }



    vector<int> v1 = {1,2,3,4,5};
    my_reverse(v1.begin(),v1.end());
    cout<< "用swap交换后的结果： "<<endl;
    vector<int>::iterator j;
    for(j = v1.begin(); j!=v1.end(); j++){
        cout<< *j<<endl;
    }

    return 0;

}
