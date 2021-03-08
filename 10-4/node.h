//
// Created by Q on 2/23/2021.
//

#ifndef INC_10_4_NODE_H
#define INC_10_4_NODE_H
#include <string>

struct node{
    std::string info;
    struct node *prev;
    struct node *next;
};
#endif //INC_10_4_NODE_H
