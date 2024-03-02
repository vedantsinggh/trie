#pragma once
#include <iostream>
#define print(x) std::cout<<x
#define println(x) std::cout<<x<<std::endl
#define con(x) ((int)x - 65) // Used to convert character to array indices
#define noc(x) char(x + 65) // Used to convert array indices to character
#define END 91 //Special character used to indicate end of word
#define ROOT '#' //Special character used to indicate end of word

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
    void printTrie();
    void printTrie(char val);
    void printTrie(char* val);
    ~Node();
};