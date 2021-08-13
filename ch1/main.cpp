//#include <iostream>
//#include <string>
//int main() {
//    // ask for an input name
//    std::cout<<"please enter your name: ";
//    std::string name;
//    // read an input stream from keyboard
//    std::cin>> name;
//    std::cout<<"hello, "<<name<<std::endl;
//    // give the greeting a frame
//    std::string greeting = "Hello, "+ name+"!";
//    std::string space(greeting.size(),' ');
//
//    std::string second = "* " + space + " *";
//    std::string first(second.size(),'*');//change upon second line string
//
//    // start to cout the result
//    std::cout<< first<<std::endl;
//    std::cout<<second<<std::endl;
//    std::cout<<"* "+ greeting +" *"<<std::endl;
//    std::cout<<second<<std::endl;
//    std::cout<<first<<std::endl;
//
//    return 0;
//}


// 1-4 scope trem:  valid or not
/*
 * The const std::string variable s in scope main-1 is not the same
 * const std::string variable s in scope main-1-1 (which is nested inside scope main-1).
 * Even though scope main-1-1 is nested inside scope main-1,
 * all local variables inside scope main-1-1 is hidden from view of main-1.
 *
#include <iostream>
#include <string>
int main()
{// scope main starts
    {//scope main-1 start
        const std::string s = "a string";
        std::cout << s << std::endl;
        {//scope main-1-1 starts
            const std::string s = "another string";
            std::cout<< s <<std::endl;
        } //scope main-1-1 ends
    }//scope main-1 ends
    return 0;
}// scope main ends
*/
//1-4 -2
/*
 * Solution (Part 2)
 Adding a semi-colon (;) between the second last and third last right curly braces
 will still constitute a valid program.
 For clarity, this is what the program would look like with that semi-colon.

 the additional semi-colon essentially creates a null-statement within the main-1 scope.
 i.e. it has no effect to the code.
 I think the reason the authors ask this question is to solidify our understanding on scope.
 i.e. which scope does that semi-colon belong to?
 Writing a C++ code in the above manner helps us visualise this easier.
 *
#include <iostream>
#include <string>
int main()
{// scope main starts
    {//scope main-1 start
        const std::string s = "a string";
        std::cout << s << std::endl;
        {//scope main-1-1 starts
            const std::string s = "another string";
            std::cout<< s <<std::endl;
        }  //scope main-1-1 ends
         ;   // <---------------------------------------- semi-colon
    }//scope main-1 ends
    return 0;
}// scope main ends

*/
/*
//1- 5
// no, it is not valid and require correction. correction: remove the inner curly brace in the first output line;
#include <iostream>
#include <string>
int main()
{
    {
        std::string s = " a string";
        {//delete <-------------
            std::string x =s +  ", really";
            std::cout<< s <<std::endl;
        }// delete <-----------------
        std::cout<< x <<std::endl;
    }
    return 0;
}
// 外部的变量可以被嵌套的程序块使用，反之不可以。

 */
//1-6
/* output
 * what is your name?chuanqiu He
   Hello, chuanqiu
   and what is your name? Hello, He; nice to meet you too!
*/
// Note that the buffer automatically discard the leading and trailing blanks.
// Each word is separated by a space character.
#include <iostream>
#include <string>
int main()
{
    std::cout<<"what is your name? ";
    std::string name;
    std::cin >>name;
    std::cout<<"Hello, "<<name << std::endl<<"and what is yours? ";
    std::cin>>name;
    std::cout<<"Hello, "<<name <<"; nice to meet you too!" <<std::endl;
    //test 3 前面只输入两个名字，用空格隔开。到这里时 buffer空了，那么会显示让你输入的界面，输入后再回车，就会输出刚输入的名字
    std::cin>>name;
    std::cout<<"Hello, "<<name <<"; nice to meet you too???????" <<std::endl;
    return 0;
}

/*
 * The first std::cin line will read input until it encounters a space,
 * and store the result in the variable name.
 * The rest of the input remains buffered. The second std::cin line will read the
 * remaining name after the space without pausing to ask for more input. The output of the program is as follows:
 * */



























