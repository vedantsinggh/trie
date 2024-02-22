#include "trie.h"

Node::Node(){
	println("Root node created!");
}

Node::Node(char val){
	value = val;
	print("Node created with value -> ");
	println(value);
	for (short i = 0; i < 27; i++)
	{
		children[i] = nullptr;
	}
}

void Node::append(char val){
	Node* newNode = new Node(val);
	children[((int)val - 65)] = newNode; 
}

int Node::sizeOfChildren(){
	return sizeof(children);
}

int Node::size(){
	return sizeof(Node);
}

Node::~Node(){
	if (children)
		for (short i = 0; i < 27; i++)
			if (children[i] != nullptr)
				delete children[i];
	
	print("Destroyed '");
	print(value);
	println("' Node!");
}