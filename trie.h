#pragma once
#include <iostream>
#define print(x) std::cout<<x
#define println(x) std::cout<<x<<std::endl

class Node{
public:
    char* value;
public:
    Node();
    Node(char& val);
    ~Node();
};