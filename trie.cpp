#include "trie.h"

Node::Node(){
	println("Empty node created!");
}

Node::Node(char& val){
	value = &val;
	println("Non empty node created!");
	print(*value);
}

Node::~Node(){
	print("Destroyed ");
	println(*value);
}