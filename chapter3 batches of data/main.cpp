/*
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

using namespace std;
int main(){
    cout<<"please enter your name: "<<endl;
    string name;
    cin>>name;
    cout<<"Hello, "<<name<<" !";
    //
    cout <<"please enter your midterm and final exam grades: ";
    double midterm, final;
    cin >> midterm >> final;
    //homework
    cout<<"please enter your homework grades: " "follow by end-of-file: ";

    // the number of hw and sum of grades read so far
    int count = 0;
    double sum = 0.0;
    // variable x means the hw grades read into
    double x;
    // invariant: 不变式
        // we already have read count grades
        // sum is the first count grades
    while(cin>>x){
        count++;
        sum +=x;
    }

    streamsize prec = cout.precision();
    cout<<" your final grades is "<< setprecision(3)
        <<0.2*midterm + 0.4 * final + 0.4 * sum /count
        <<setprecision(prec)<<endl;
    return 0;
}

*/
/*
#include <iomanip>;
#include <iostream>;
#include <ios>;
#include <string>;
#include <vector>;

using namespace std;
int main(){
    cout<<"what is your name,please enter: "<<endl;
    string name;
    cin>> name;
    cout<<"hello " << name<<endl;
    cout<<"pleae enter your midterm and final grades: ";
    double midt, final;
    cin >> midt >> final;

    cout <<"please enter your homework :  ";
    double x;
    vector<double> homework; // to hold all grades of hw
    while(cin>>x){
        homework.push_back(x);
    }
    // sort
    typedef vector<double>::size_type vec_sz;
    vec_sz size = homework.size();
    if (size==0){
        cout<<"you must enter your grades."<< "please try again."<<endl;
        return 1;
    }

    vec_sz mid = size/2;
    double median;
    median = size % 2 ==0? (homework[mid] + homework[mid-1])/2 : homework[mid];

    // compute the final grades
    streamsize prec = cout.precision();
    cout<<"your final grade is "<< setprecision(3)<<0.2*midt + 0.4*final + 0.4* median<<setprecision(prec)<<endl;
    return 0;
}

*/
/*
//3-4
#include <iostream>
#include <string>

using namespace std;
int main(){
    typedef string::size_type str_sz;


    string longest;
    str_sz longlength = 0;
    string shortest;
    str_sz shortlength =0;
    cout<<"please enter words: "<<endl;
    string s;
    while(cin>>s){
        if(longlength==0 || longlength >s.size() ){
            longest = s;
            longlength = s.size();
        }
        if(shortlength==0 || shortlength <s.size() ) {
            shortest = s;
            shortlength = s.size();
        }
    }

    cout <<"the longest string is: "<< longest<<endl;
    cout <<" the shortest string is: "<< shortest<<endl;
    return 0;
}
*/






