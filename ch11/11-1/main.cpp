/*
 * 11-1. The Student_info structure that we defined in Chapter 9 did not define a copy constructor, assignment operator, or destructor. Why not?

Ans：因为在编写类时，如果没有显示地定义复制构造函数、赋值运算符、析构函数，
 那么编译器就会自动为类生成相应的默认版本函数，从而进行一些默认的操作。
 对Student_info类的数据成员复制，该类会利用string和vector类的复制构造函数来分别复制name和homework成员；
 对另外两个double类型的变量成员midterm和fin则进行直接的复制。

 *
 *
 * 11-2. That structure did define a default constructor. Why?

Ans：只有没有定义任何构造函数编译器才会自动生成一个不带任何参数的构造函数，
 而如果定义了任何一个构造函数，那么编译器就不会自动生成默认的构造函数。

11-3. What does the synthesized assignment operator for Student_info objects do?

Ans：赋值是先在定义一个变量并初始化后，调用了“=”才被调用；
 因此赋值会先删除原内存单元的值，然后在赋予其新的值。
 Student_info对象在调用自动生成的操作函数具体的操作有：
 自动调用string和vector的复制构造函数对name和homework进行赋值；直接对两个double变量midterm和fin进行赋值；




11-4. How many members does the synthesized Student_info destructor destroy?
 The synthesized Student_info destructor will destroy the pointer, but destroying a pointer does not free the space to which it points.
 We defined four data members:string name;double midterm,fin;vector homework;
 * */
