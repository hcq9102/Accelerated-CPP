/*
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype> //用于操作字符
using namespace std;

struct Rotation{
    vector<string>::size_type first; //第一个单词
    vector<string> words; //单行输入
};

//分割字符串
vector<string> split(const string& s){
    vector<string> ret;
    typedef string::size_type string_sz; //类型别名
    string_sz i = 0;

    while(i != s.size()){
        //忽略前面空白
        while(i!= s.size() && isspace(s[i])){
            i++;
        }
        //找出第一个单词的终结点
        string_sz j =i;
        while(j != s.size() && !isspace(s[j])){
            j++;//执行最后，是指向某单词最后一个字符的后面一个空格
        }
        //找到了非空白字符
        if(i !=j){
            ret.push_back(s.substr(i,j-i)); //把某个完整单词放进容器（开始位置，截取长度）
            i = j;//后移指针
        }
    }
    return ret;
}

//单行文本轮转
vector<Rotation> rotate_line(const string& line){
    vector<Rotation> rotations;
    vector<string> words = split(line);//分割成单个单词

    //每次都把vec内第一个单词放在最后一个
    for(vector<Rotation>::size_type i =0; i != words.size(); i++){
        Rotation rot = {words.size() - i, words};
        rotations.push_back(rot);
        //把迭代器由开始由元素指向下一个个元素，实现旋转
        //返回一个迭代器，它指向原始的第一个元素所在的新位置
        rotate(words.begin(),words.begin()+1, words.end()); //rotate可以传入三个参数，将第二个参数到第三个参数的元素放到第一个参数前面
    }

    return rotations;
}



//多行文本轮转 ??
vector<Rotation> rotate_lines(const vector<string>& lines){
    vector<Rotation> rotations;
    for(vector<Rotation>::size_type i =0; i != lines.size(); i++){
        vector<Rotation> new_rotations = rotate_line(lines[i]);
        rotations.insert(rotations.end(),new_rotations.begin(),new_rotations.end());//在迭代器 pos 指定的位置之前，插入其他容器（不仅限于vector）中位于 [first,last) 区域的所有元素，并返回表示第一个新插入元素位置的迭代器
    }
    return rotations;
}

bool compare(const Rotation& x, const Rotation& y){
    return x.words < y.words;
}
//转换为小写字母
string toLowerCase(const string &date){
    string str = date;
    std::transform(date.begin(), date.end(), str.begin(),::tolower);
    //作用是：将某操作应用于指定范围的每个元素
    //transform(first,last,result,op);
    // first是容器的首迭代器，last为容器的末迭代器，result为存放结果的容器，
    // op为要进行操作的一元函数对象或sturct、class；
    return  str;
}

//整个字符串数组转换为小写字母
vector<string> lowcase(const vector<string>& date){
    vector<string> vect;
    for (vector<string>::const_iterator it = date.begin(); it != date.end(); ++it) {
        vect.push_back(toLowerCase(*it));
    }
    return  vect;
}

void print_rotations(vector<Rotation> rotations){
    vector<string> first_halves;
    vector<string> second_halves;
    string::size_type  max_first_halves_width = 0;

    for(vector<Rotation>::size_type i =0; i!=rotations.size(); i++){
        Rotation rot = rotations[i];
        string first_half, second_half;

        for (vector<string>::size_type j = rot.first; j <  rot.words.size(); ++j) {
            first_half += rot.words[j] + " ";
        }
        first_halves.push_back(first_half);

        if(first_half.size() > max_first_halves_width) {
            max_first_halves_width = first_half.size();
        }
        for (vector<string>::size_type j = 0; j <  rot.first; ++j) {
            second_half += rot.words[j] + " ";
        }

        second_halves.push_back(second_half);

    }
    for (vector<string>::size_type i = 0; i != first_halves.size(); ++i) {
        cout << setw(max_first_halves_width)
             << first_halves[i]
             << "\t"
             << second_halves[i]
             << endl;
    }
}
vector<string> read_lines(){
    vector<string> lines;
    string line;
    while(getline(cin,line)){
        lines.push_back(line);
    }
    return lines;
}

int main(int argc,const char *argv[]) {
    vector<string> lines = read_lines();
    vector<Rotation> rotations = rotate_lines(lines);
    sort(rotations.begin(),rotations.end(),compare);
    print_rotations(rotations);
    return 0;
}
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <iomanip>

using  std::cin; using std::endl;
using std::cout; using std::string;
using std::vector; using std::rotate;
using std::setw;

struct Rotation{
    vector<string>::size_type first;//第一个单词
    vector<string> words;//单行输入
};

//分割字符串
vector<string> split(const string& s){
    vector<string> ret;
    typedef string::size_type string_size;
    string_size  i = 0;

    while(i != s.size()){
        //忽略前段的空白：[先前的i,i)中全部字符都是空格
        while(i != s.size() && isspace(s[i])){
            i++;
        }
        //找出下一个单词的终结点
        string_size j = i;
        //[先前的j,j)中的任意字符都不是空格
        while(j != s.size() && !isspace(s[j])){
            j++;
        }
        //找到了一些非空白符
        if(i != j){
            ret.push_back(s.substr(i, j - i));
            i = j;
        }
    }
    return ret;
}

//单行文本轮转
vector<Rotation> rotate_line(const string& line){
    vector<Rotation> rotations;
    vector<string> words = split(line);//分割成单个单词

    //每次都将vector中第一个单词旋转到最后一个
    for (vector<Rotation>::size_type i = 0; i != words.size(); ++i) {
        Rotation rot = {words.size() - i, words};
        rotations.push_back(rot);
        //把迭代器由开始由元素指向下一个个元素，实现旋转
        // 返回一个迭代器，它指向原始的第一个元素所在的新位置
        rotate(words.begin(), words.begin()+1, words.end());
    }
    return rotations;
}

//多行文本轮转
vector<Rotation> rotate_lines(const vector<string>& lines){
    vector<Rotation> rotations;
    for (vector<string>::size_type i = 0; i != lines.size(); ++i) {
        vector<Rotation> new_rotations = rotate_line(lines[i]);
        rotations.insert(rotations.end(), new_rotations.begin(), new_rotations.end());
    }
    return rotations;
}

//转换为小写字母
string toLowerCase(const string &date){
    string str = date;
    std::transform(date.begin(), date.end(), str.begin(),::tolower);
    //作用是：将某操作应用于指定范围的每个元素
    //transform(first,last,result,op);
    // first是容器的首迭代器，last为容器的末迭代器，result为存放结果的容器，
    // op为要进行操作的一元函数对象或sturct、class；
    return  str;
}

//整个字符串数组转换为小写字母
vector<string> lowcase(const vector<string>& date){
    vector<string> vect;
    for (vector<string>::const_iterator it = date.begin(); it != date.end(); ++it) {
        vect.push_back(toLowerCase(*it));
    }
    return  vect;
}

//按字母大小排序
bool compare(const Rotation& x, const Rotation& y){
    return lowcase(x.words) < lowcase(y.words);
}

void print_rotations(vector<Rotation> rotations){
    vector<string> first_halves;
    vector<string> second_halves;
    string::size_type  max_first_halves_width = 0;

    for (vector<Rotation>::size_type i = 0; i != rotations.size(); ++i) {
        Rotation rot = rotations[i];
        string fisrt_half, second_half;

        for (vector<string>::size_type j = rot.first; j <  rot.words.size(); ++j) {
            fisrt_half += rot.words[j] + " ";
        }

        first_halves.push_back(fisrt_half);

        if(fisrt_half.size() > max_first_halves_width) {
            max_first_halves_width = fisrt_half.size();
        }

        for (vector<string>::size_type j = 0; j <  rot.first; ++j) {
            second_half += rot.words[j] + " ";
        }

        second_halves.push_back(second_half);

    }
    for (vector<string>::size_type i = 0; i != first_halves.size(); ++i) {
        cout << setw(max_first_halves_width)
             << first_halves[i]
             << "\t"
             << second_halves[i]
             << endl;
    }
}

vector<string> read_lines(){
    vector<string> lines;
    string line;
    while(getline(cin, line)){
        lines.push_back(line);
    }
    return  lines;
}

int main(int argc,const char *argv[]){
    vector<string> lines = read_lines();
    vector<Rotation> rotations = rotate_lines(lines);
    sort(rotations.begin(), rotations.end(), compare);
    print_rotations(rotations);
    return 0;
}
