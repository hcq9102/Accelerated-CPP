//
// Created by Q on 1/10/2021.
//

#include <iostream>
#include <algorithm>
#include "Student_info.h"
#include "grade.h"
using namespace std;
bool compare(const Student_info& x, Student_info& y){
    return x.name < y.name;
}

istream& read(istream& in,Student_info& s){
    in>>s.name >>s.midterm >>s.fin;
    read_hw(in, s.homework);
    return in;
}

istream& read_hw(istream& in, vector<double>& v){
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
    return (find(s.homework.begin(),s.homework.end(),0)==s.homework.end());
    //该函数会返回一个输入迭代器，当 find() 函数查找成功时，其指向的是在 [first, last) 区域内查找到的第一个目标元素；
    // 如果查找失败，则该迭代器的指向和 last 相同。
    // 这里就是查找有没有成绩为0的hw, 如果返回true， 表明都是>0 的成绩，表示作业都做了。
}

vector<Student_info> extract_fails(vector<Student_info>& s){
    vector<Student_info>::iterator iter;
    iter = stable_partition(s.begin(), s.end(),pgrade); //使谓词pgrade为真的元素，即>60的元素放在容器的头部

    vector<Student_info> fail(iter,s.end());
    s.erase(iter,s.end());
    return fail;
}

