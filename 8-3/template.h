//
// Created by Q on 2/2/2021.
//

#include <vector>
#include <stdexcept>
#include <algorithm>


template <class RandomIterator>
typename RandomIterator::value_type median(RandomIterator b, RandomIterator e){
    if (b == e)
        throw std::domain_error("median of an empty vector");
    std::sort(b, e);
    typename RandomIterator::difference_type size = e - b;
    RandomIterator mid = b + size / 2;
    return size % 2 == 0 ? (*mid + *(mid - 1)) / 2 : *mid;
}