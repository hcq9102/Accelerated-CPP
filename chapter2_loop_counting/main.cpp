//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(){
//    cout<<"please enter your name :"<<endl;
//    string name;
//    cin>> name;
//
//    string greeting = "Hello, " + name +" !";
//
//    const int pad  =1;
//    const int rows = pad*2+3;
//    const string::size_type cols = greeting.size() + pad*2 + 2;
//    cout << endl;
//
//    for(int r = 0; r!=rows; r++){
//        //每一行的列数初始值都是c =0;
//        string::size_type c = 0; //字符数c,也是列数
//        while(c!= cols) {
//            if (r == pad + 1 && c == pad + 1) {
//                cout << greeting;
//                c += greeting.size();
//            } else {//不在问候语行和列
//                if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
//                    cout << "*";
//                } else {
//                    cout << " ";
//                }
//                c++;
//            }
//        }
//        cout<<endl;
//    }
//    return 0;
//}
/*
//2-0 & 1,2 let pad = 0,or other number

#include <iostream>
#include <string>
using namespace std;
 int main(){
     cout<<"please enter your name :" ;
     string name;
     cin >> name;
     cout<<endl;
     string greeting  = "hello, "+name+" !";
     const int pad  = 0; //0
     const int rows = pad*2+3;
     const string::size_type cols = greeting.size()+pad*2+2;

     for(int r=0; r<rows; r++){
         string::size_type c = 0;
         while(c!=cols){
             if(r==pad+1 && c== pad+1){
                 cout<< greeting;
                 c += greeting.size();
             }else{
                 if(r==0||r==rows-1 ||c==0 || c==cols-1){
                     cout<<"*";
                 }else{
                     cout<<" ";
                 }
                 c++;
             }
         }
         cout<<endl;//每输出一行重启一行
     }
     return 0;
 }
*/

/*
//2-3
#include <iostream>
#include <string>
using namespace std;
int main(){
    cout<<"please enter your name :" ;
    string name;
    cin >> name;
    cout<<endl;
    string greeting  = "hello, "+name+" !";
    cout<< "please enter the number of pad: "<<endl;
    int pad;
    cin>>pad;

    const int rows = pad*2+3;
    const string::size_type cols = greeting.size()+pad*2+2;

    for(int r=0; r<rows; r++){
        string::size_type c = 0;
        while(c!=cols){
            if(r==pad+1 && c== pad+1){
                cout<< greeting;
                c += greeting.size();
            }else{
                if(r==0||r==rows-1 ||c==0 || c==cols-1){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
                c++;
            }
        }
        cout<<endl;//每输出一行重启一行
    }
    return 0;
}
*/

/*
//2-4
// 把greet行间隔的pad表示出来，把填补行的pad表示出来。
#include <iostream>
#include <string>
using namespace std;
int main(){
    cout<<"please enter your name :" ;
    string name;
    cin >> name;
    cout<<endl;
    string greeting  = "hello, "+name+" !";
    cout<< "please enter the number of pad: "<<endl;
    int pad;
    cin>>pad;
    //define the pad for greeting line and pad line;
    const string padLeftRight (pad,' ');
    const string filler(greeting.size()+pad*2,' ');

    const int rows = pad*2+3;
    const string::size_type cols = greeting.size()+pad*2+2;

    for(int r=0; r<rows; r++){
        string::size_type c = 0;
        while(c!=cols){
            if(r==pad+1 && c== pad+1){
                cout<< greeting;
                c += greeting.size();
            }else{
                if(r==0||r==rows-1 ||c==0 || c==cols-1){
                    cout<<"*";
                    ++c;
                }else {
                    // are we on greet line
                    if(r==pad+1){
                        cout<<padLeftRight;
                        c+=padLeftRight.size();
                    }else {
                        cout << filler;
                        c += filler.size();
                    }
                }
            }
        }
        cout<<endl;//每输出一行重启一行
    }
    return 0;
}
*/

/*
// 2-5 Write a set of “*” characters so that they form a square, a rectangle, and a triangle.

#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "this program is gonna to output  square, rectangular, triangle"<<endl;
    cout <<" please enter the height of the shape"<<endl;
    int height ;
    cin>> height;
    //1.output square
    for(int r = 0; r< height; r++){
        int c =0;
        while(c!=height){
            if(r==0 || r==height-1 ||c==0|| c==height-1){
                cout<<"*";
                c++;
            }else{
                cout <<" ";
                c++;
            }
        }
        cout<<endl;
    }
    //2.output rectangle
    cout<<"please enter the width of your shape"<<endl;
    int width;
    cin>>width;
    for(int r =0; r <height;r++){
        int c =0;
        while(c!=width){
            if(r==0 || r==height-1|| c==0 || c==width-1){
                cout<<"*";
                c++;
            }else{
                cout<<" ";
                c++;
            }
        }
        cout<<endl;
    }
    cout <<" please enter another height for your triangle if you want"<<endl;
    cin>>height;
    //output triangle
    //在r+c ==len+1 或 r+c==len-1 或最后一行输出星星
    for(int r =1; r<=height; r++){
        for(int c =1;c<= 2*height-1; c++){
            if(r+c==height+1 || c-r ==height-1 || r==height){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
*/

/*
//2-7
#include <iostream>
using namespace std;
int main(){
    int i=11;
    while(i>-5){
        i-=1;
        cout<<i<<endl;

    }
    return 0;
}
 */

/*
//2-8  output ==362880
#include <iostream>

using namespace std;
int main(){
    int i=10;
    int mult =1;
    while(i>1){
        i--;
        mult *=i;
    }
    cout<< mult<<endl;
}
 */

// 2-9 compare two values and return the bigger one
#include <iostream>
using namespace std;
int main(){
    cout<<"please enter a value"<<endl;
    int a;
    cin>>a;
    cout<<"pleas enter b value"<<endl;
    int b;
    cin>>b;
    if(a>=b){
        cout<<"a is "<<a<<" and b is "<<b<<endl;
        cout<<" then the bigger one is"<<a<<endl;
    }else{
        cout<<"a is "<<a<<" and b is "<<b<<endl;
        cout<<"then the bigger one is "<<b<<endl;
    }
    return 0;
}

/*
 * The first use of std:: is in the using-declaration. The name cout
 * is declared to mean std::cout. The second time std:: appears is to make use of the std::cout stream to output a blank line.
 * Because the using-declaration does not apply at this line,the std:: namespace must be used explicitly.
 * The last use of std:: is to output a new line with the std::endl manipulator.
 * */