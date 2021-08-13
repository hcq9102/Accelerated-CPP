

#ifndef INC_16_0_PIC_H
#define INC_16_0_PIC_H

#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

#include "Ptr.h"

class Picture;

class Pic_base{
    friend std::ostream& operator<<(std::ostream&, const Picture&);
    friend class Frame_Pic;
    friend class HCat_Pic;
    friend class VCat_Pic;
    friend class String_Pic;

    typedef std::vector<std::string>::size_type ht_sz;
    typedef std::string::size_type wd_sz;

    virtual wd_sz width() const = 0;
    virtual ht_sz height() const = 0;
    virtual void display(std::ostream&, ht_sz, bool) const = 0;

public:
    virtual ~Pic_base() { }

protected:
    static void pad(std::ostream& os, wd_sz, wd_sz);
};

class Picture{
    friend std::ostream& operator<<(std::ostream&, const Picture&);
    friend Picture frame(const Picture&);
    friend Picture hcat(const Picture&, const Picture&);
    friend Picture vcat(const Picture&, const Picture&);

public:
    Picture(const std::vector<std::string>& = std::vector<std::string>());

private:
    Picture(Pic_base* ptr): p(ptr){ }
    Ptr<Pic_base> p;
};

Picture frame(const Picture&);
Picture hcat(const Picture&, const Picture&);
Picture vcat(const Picture&, const Picture&);
std::ostream& operator<<(std::ostream&, const Picture&);

class String_Pic: public Pic_base{
    friend class Picture;
    std::vector<std::string> data;
    String_Pic(const std::vector<std::string>& v): data(v) { }

    ht_sz height() const {return data.size();}
    wd_sz width() const;
    void display(std::ostream&, ht_sz, bool) const;
};

class VCat_Pic: public Pic_base{
    friend Picture vcat(const Picture&, const Picture&);
    Ptr<Pic_base> top, bottom;
    VCat_Pic(const Ptr<Pic_base>& t, const Ptr<Pic_base>& b): top(t), bottom(b) { }

    wd_sz width() const{
        return std::max(top->width(), bottom->width());
    }
    ht_sz height() const{
        return top->height() + bottom->height();
    }
    void display(std::ostream&, ht_sz, bool) const;
};

class HCat_Pic: public Pic_base{
    friend Picture hcat(const Picture&, const Picture&);
    Ptr<Pic_base> left, right;
    HCat_Pic(const Ptr<Pic_base>& l, const Ptr<Pic_base>& r): left(l), right(r) { }

    wd_sz width() const{
        return left->width() + right->width();
    }
    ht_sz height() const{
        return std::max(left->height(), right->height());
    }
    void display(std::ostream&, ht_sz, bool) const;
};

class Frame_Pic: public Pic_base{
    friend Picture frame(const Picture&);
    Ptr<Pic_base> p;
    Frame_Pic(const Ptr<Pic_base>& pic): p(pic){ }

    wd_sz width() const{
        return p->width() + 4;
    }
    ht_sz height() const{
        return p->height() + 4;
    }
    void display(std::ostream&, ht_sz, bool) const;
};
#endif //INC_16_0_PIC_H
