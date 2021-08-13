//main.cpp
/*
 * 这里我们考虑扩展情况，
 * 因为扩展情况包含前述解决办法，首先利用函数is_updown()，
 * 判断一个单词对否为上行或下行单词。若是则将该单词存储于updown容器中；
 * 若不是上行或下行单词则将利用resize()，将其存储于原容器中
 *
 * */
#include <iostream>
#include <fstream>
#include <vector>
#include "updown.h"
using namespace std;

int main()
{
    ifstream infile;
    infile.open("/Users/Q/Desktop/TestFile/11test.txt");
    if(!infile.good())
    {
        cout<<"file open error!";
        return -1;
    }
    //find it is a up or down word
    string word;
    vector<string> longest;
    while(!infile.eof())
    {
        infile>>word;
        if(!is_updown(word))
        {
            longest.push_back(word);
        }

    }
    infile.close();
    //the longest word
    typedef string::size_type size_tp;
    vector<string>::const_iterator it=longest.begin(),maxit=it;
    size_tp maxlen=(*it).size();
    for(it=it+1;it!=longest.end();++it)
    {
        size_tp n=(*it).size();
        if(maxlen<=n)
        {
            maxlen=n;
            maxit=it;
        }

    }
    cout<<endl<<"the longest updown-word is: "<<*maxit<<endl;
    cout<<" its size is: "<<maxlen<<endl;
    return 0;
}