#pragma once
#include <iostream>
#define print(x) std::cout<<x
#define println(x) std::cout<<x<<std::endl
#define CON(x) ((int)x - 65) // Used to convert character to array indices
#define END 91 //Special character used to indicate end of word

class Node{
public:
	char value;
	Node *children[27];
public:
	Node();
	Node(char val);
	Node* append(char val);
	int size();
	int sizeOfChildren();
	~Node();
};