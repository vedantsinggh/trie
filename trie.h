#pragma once
#include <iostream>
#define print(x) std::cout<<x
#define println(x) std::cout<<x<<std::endl

class Node{
public:
    char value;
    Node *children[27];
public:
    Node();
    Node(char val);
    void append(char val);
    int size();
    int sizeOfChildren();
    ~Node();
};