//
// Created by Q on 3/26/2021.
//

#ifndef INC_15_4_PIC_H
#define INC_15_4_PIC_H
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
    friend class Picture;

    typedef std::vector<std::string>::size_type ht_sz;
    typedef std::string::size_type wd_sz;

    virtual wd_sz width() const = 0;
    virtual ht_sz height() const = 0;
    virtual void display(std::ostream&, ht_sz, bool) const = 0;

    // reframe function
    virtual void reframe(char, char, char) = 0;

public:
    virtual ~Pic_base() { }

protected:
    static void pad(std::ostream& os, wd_sz, wd_sz);
};

class Picture{
    friend std::ostream& operator<<(std::ostream&, const Picture&);
    friend Picture frame(const Picture&);
    // user specify characters
    friend Picture frame(const Picture&, char, char, char);
    friend Picture hcat(const Picture&, const Picture&);
    friend Picture vcat(const Picture&, const Picture&);


public:
    Picture(const std::vector<std::string>& = std::vector<std::string>());

    // reframe function
    void reframe(char c, char t_b, char s){ p->reframe(c, t_b, s);}

private:
    Picture(Pic_base* ptr): p(ptr){ }
    Ptr<Pic_base> p;
};

Picture frame(const Picture&);
// user specify characters
Picture frame(const Picture&, char, char, char);
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

    // reframe function
    void reframe(char, char, char) { }
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

    // reframe function
    void reframe(char, char, char);
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

    // reframe function
    void reframe(char, char, char);
};

class Frame_Pic: public Pic_base{
    friend Picture frame(const Picture&);

    // user specify characters
    friend Picture frame(const Picture&, char, char, char);

    friend Picture reframe(char, char, char);

    Ptr<Pic_base> p;
    char corner;
    char top_bottom;
    char side;

    Frame_Pic(const Ptr<Pic_base>& pic, char corner = '*', char top_bottom = '-', char side = '|')
            : p(pic), corner(corner), top_bottom(top_bottom), side(side) { }

    wd_sz width() const{
        return p->width() + 4;
    }
    ht_sz height() const{
        return p->height() + 4;
    }
    void display(std::ostream&, ht_sz, bool) const;
    void reframe(char, char, char);
};
#endif //INC_15_4_PIC_H
