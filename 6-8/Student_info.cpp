//
// Created by Q on 1/15/2021.
//

#include <iostream>
#include <algorithm>
#include "Student_info.h"
#include "grade.h"
using namespace std;

bool compare(const Student_info& x, const Student_info& y){
    return x.name < y.name;
}
std::istream& read(std::istream& in, Student_info& s){
    in>>s.name>>s.midterm >>s.final;
    read_hw(in, s.homework);
    return in;
}
std::istream& read_hw(std::istream& in, std::vector<double>& v){
    if(in){
        v.clear();
        double hw;
        while(in>>hw){
            v.push_back(hw);
        }
        in.clear();
    }
    return in;
}

bool did_all_hw(const Student_info& s){
    return (find(s.homework.begin(), s.homework.end(),0) == s.homework.end());
}
std::vector<Student_info> extract_fails(std::vector<Student_info>& s){
    vector<Student_info>::iterator iter;
    iter = stable_partition(s.begin(),s.end(),pgrade);//means使谓词pgrade为真的元素，即>60的放在容器的头部

    vector<Student_info> fail(iter,s.end());//vector(begin,end):复制[begin,end)区间内另一个数组的元素到vector中
    s.erase(iter,s.end());//把fail的记录删除，留下pass，这样做的目的是什么？直接返回fail不就好了么
    return fail;
}
