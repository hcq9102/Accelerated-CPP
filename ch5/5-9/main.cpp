/*
 * Ans：思路首先从文件逐个读取单词存储于一个string中，但是没有一个现成的接口来进行单词大小写判断，
 * 故利用<cctype>中的isupper()和islower()来对单词每个字符进行判断，若所有单词字符都是大写则将其存入容器vector<string> upper中，
 * 若不全是大写则存储在容器vector<string> lower中。程序实现如下：
 * */
//main.cpp
#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
    ifstream infile;
    infile.open("/Users/Q/Desktop/TestFile/9test.txt",ios::in);
    if(!infile.good())
    {
        cout<<"open error!";
        return -1;
    }

    vector<string> upper,lower;
    while(!infile.eof())
    {
        string word;
        /*the normal input operator >> separates on whitespace and so can be used to read "words":
         * */
        infile>>word;
        typedef string::size_type size_tp;
        size_tp size=word.size();
        size_tp u=0,l=0;
        for(size_tp i=0;i<size;++i)
        {
            if(isalpha(word[i]) && isupper(word[i]))
                ++u;
            else if(isalpha(word[i]) && islower(word[i]))
                ++l;
        }
        if(u==size)
            upper.push_back(word);
        else if(l==size)
            lower.push_back(word);
    }

    for(vector<string>::const_iterator it=upper.begin();it!=upper.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(vector<string>::const_iterator it=lower.begin();it!=lower.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}

/*
 * 从文本文件中依次读取一个单词
 * void readFile()
{
    ifstream file;
    file.open ("program.txt");
    if (!file.is_open()) return;

    string word;
    while (file >> word)
    {
        cout<< word << '\n';
    }
}
 * */