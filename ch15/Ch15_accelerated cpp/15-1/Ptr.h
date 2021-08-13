//
// Created by Q on 3/26/2021.
//

#ifndef INC_15_1_PTR_H
#define INC_15_1_PTR_H
#include <cstddef>
#include <stdexcept>

template <class T> class Ptr{
public:
    void make_unique(){
        if (*refptr != 1){
            --*refptr;
            refptr = new size_t(1);
            p = p ? p->clone() : 0;
        }
    }

    Ptr(): p(0), refptr(new std::size_t(1)) { }
    Ptr(T* t): p(t), refptr(new std::size_t(1)) { }
    Ptr(const Ptr& h): p(h.p), refptr(h.refptr) { ++*refptr;}

    Ptr& operator=(const Ptr&);
    ~Ptr();
    operator bool() const {return p;}
    T& operator*() const {
        if (p)
            return *p;
        throw std::runtime_error("unbound Ptr");
    }
    T* operator->() const{
        if (p)
            return p;
        throw std::runtime_error("unbound Ptr");
    }

private:
    T* p;
    std::size_t* refptr;

};

template <class T>
Ptr<T>& Ptr<T>::operator=(const Ptr& rhs) {
    ++*rhs.refptr;
    if (--*refptr == 0){
        delete refptr;
        delete p;
    }

    refptr = rhs.refptr;
    p = rhs.p;
    return *this;
}

template <class T> Ptr<T>:: ~Ptr(){
    if (--*refptr == 0){
        delete refptr;
        delete p;
    }
}
#endif //INC_15_1_PTR_H
