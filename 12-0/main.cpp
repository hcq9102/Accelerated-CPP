#include "Str.h"
#include <string>

using namespace std;

int main()
{
    cout<<Str()<<endl;
    Str s1=Str(8,'6');
    Str s2=Str(s1);
    Str s3=s2;
    cout<<s3<<endl;

    const Str name="kitty";
    const Str greet="Hello , "+name+" !";
    cout<<endl<<greet<<endl;

    Str s="tianya";
    s[0]='M';
    s[4]='Y';
    cout<<s<<endl;

    return 0;
}
