# We only need to modify compare() arguments type:
/*
 //bool compare(const Student_info& x,const Student_info& y)
bool compare(Student_info x,Student_info y)
``
#Tips:
a const object can only call a const member function(like: type fun(args) const {} )
and why we also modify Student_info& as Student_info x?
Because,sort(students.begin(),students.end(),compare) function transfer a const object to compare,
we can't initialize a non-const reference from a const reference.so we should use Student_info y instead Studnet_info& y.
 *
 *
 * 我们仅仅需要修改函数 compare()的参数类型即可：将原先的bool compare(const Student_info& x,const Student_info& y)改为

bool compare(Student_info x,Student_info y)

Tips：const对象不可以调用const成员函数函数；

为什么又把 Student_info& 改成了Student_info x？
因为sort(students.begin(),students.end(),compare)，函数中传递给compare是一个const对象，因为不能用一个const对象来初始化一个非const引用，故需要修改为传值形式。
 * */