#include "trie.h"

Node::Node(){
	println("Root node created!");
	value = '#';
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

Node* Node::append(char val){
	if(children[CON(val)]){
		return children[CON(val)];
	}
	else {
		Node* newNode = new Node(val);
		children[CON(val)] = newNode; 
		return newNode;
	}
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