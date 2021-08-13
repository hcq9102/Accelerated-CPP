

#ifndef INC_10_2_TEMPLATE_H
#define INC_10_2_TEMPLATE_H
#include <stdexcept>
#include <algorithm>
#include <vector>

template <class T, class Iterator>
T median (Iterator begin, Iterator end){
    if (begin == end)
        throw std::domain_error("median of an empty vector or array");

    std::vector<T> temp;
    for(; begin != end; ++begin){
        temp.push_back(*begin);
    }

    std::sort(temp.begin(), temp.end());

    size_t mid = temp.size() / 2;

    T ret = (temp.size() % 2 == 0) ? (temp[mid] + temp[mid - 1]) / 2 : temp[mid];

    return ret;
}
#endif //INC_10_2_TEMPLATE_H
