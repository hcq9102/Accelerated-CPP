/*
struct Student_info
{
    std::string name;
    double midterm,fin;
    std::vector<double> homework;
 
    Student_info()
    {
        std::cout<<"construct"<<std::endl;
    }
    Student_info(const Student_info& s)
    {
        copy(s);
        std::cout<<"copy"<<std::endl;
    }
    void copy(const Student_info& s)
    {
        name=s.name;
        midterm=s.midterm;
        fin=s.fin;
        homework=s.homework;
    }
    Student_info& operator=(const Student_info& s)
    {
        std::cout<<"assign"<<std::endl;
        if(&s!=this)
            copy(s);
        return *this;
    }
    ~Student_info()
    {
        std::cout<<"del"<<std::endl;
    }
};
 */