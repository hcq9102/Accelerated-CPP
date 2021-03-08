//
// Created by Q on 2/2/2021.
//
/*
#ifndef INC_8_2_TEMPLATE_H
#define INC_8_2_TEMPLATE_H

#endif //INC_8_2_TEMPLATE_H

 */
template <class InputIterator1, class InputIterator2>
bool my_equal(InputIterator1 b, InputIterator1 e, InputIterator2 b2){
    while(b != e){
        if(*b != *b2){
            return false;
        } else {
            ++b;
            ++b2;
        }
    }
    return true;
}

template <class ForwardIterator1, class ForwardIterator2>
ForwardIterator2 my_search(ForwardIterator1 b1, ForwardIterator1 e1, ForwardIterator2 b2, ForwardIterator2 e2){
    // search for an empty sequence
    if (b2 == e2)
        return b1;

    while(b1 != e1){
        ForwardIterator1 first1 = b1;
        ForwardIterator2 first2 = b2;
        while(*first1 == *first2){
            // found the sequence
            if(first2 == e2)
                return b1;
            // not found
            if(first1 == e1)
                return e1;
            ++first1;
            ++first2;
        }
        ++b1;
    }
    return e1;
}
template <class InputIterator, class X>
InputIterator my_find(InputIterator b, InputIterator e, const X& x){
    while(b != e){
        if(*b == x)
            return b;
        else
            ++b;
    }
    return e;
}

template <class InputIterator, class Predictive>
InputIterator my_find_if(InputIterator b, InputIterator e, Predictive pred){
    while(b != e){
        if(pred(*b))
            return b;
        ++b;
    }
    return e;
}

template <class InputIterator, class OutputIterator>
OutputIterator my_copy(InputIterator b, InputIterator e, OutputIterator b2){
    while(b != e){
        *b2++ = *b++;
    }
    return b2;
}

template <class InputIterator, class OutputIterator, class X>
OutputIterator my_remove_copy(InputIterator b, InputIterator e, OutputIterator b2, const X& x){
    while(b != e){
        if(!(*b == x)){
            *b2 == *b;
            ++b2;
        }
        ++b;
    }
    return b2;
}

template <class InputIterator, class OutputIterator, class Predictive>
OutputIterator my_remove_copy_if(InputIterator b, InputIterator e, OutputIterator b2, Predictive pred){
    while(b != e){
        if(!(pred(*b))){
            *b2= *b;
            ++b2;
        }
        ++b;
    }
    return b2;
}

template <class ForwardIterator, class X>
ForwardIterator my_remove(ForwardIterator b, ForwardIterator e, const X& x){
    ForwardIterator result = b;
    while(b != e){
        if(!(*b == x)){
            *result = *b;
            ++result;
        }
        ++b;
    }
    return result;
}

template <class InputIterator, class OutputIterator, class Function>
OutputIterator my_transform(InputIterator b, InputIterator e, OutputIterator result, Function func){
    while(b != e){
        *result = func(*b);
        ++result;
        ++b;
    }
    return result;
}

template <class BidirectionIterator, class Predictive>
BidirectionIterator my_partition(BidirectionIterator b, BidirectionIterator e, Predictive pred){
    while(b != e){
        while(pred(*b)){
            ++b;
            if(b == e){
                return b;
            }
        }
        do{
            --e;
            if(b == e){
                return b;
            }
        } while(!pred(*e));
        swap(*b, *e);
        ++b;
    }
    return b;
}

template <class InputIterator, class X>
X my_accumulate(InputIterator b, InputIterator e, X x){
    while(b != e){
        x = x + *b;
        ++b;
    }
    return x;
}