#include "trie.h"

Node::Node(){
	println("Root node created!");
	value = '#';
}

Node::Node(char val){
	value = val;
	// print("Node created with value -> ");
	// println(value);
	for (short i = 0; i < 27; i++)
	{
		children[i] = nullptr;
	}
}

Node* Node::append(char val){
	if(children[con(val)]){
		return children[con(val)];
	}
	else {
		Node* newNode = new Node(val);
		children[con(val)] = newNode; 
		return newNode;
	}
}

int Node::sizeOfChildren(){
	return sizeof(children);
}

int Node::size(){
	return sizeof(Node);
}

void Node::printTrie(){
	if (children){
		for (short i = 0; i < 27; i++)
		{
			if (children[i] != nullptr)
			{
				if (value != ROOT)
					print(value);
				
				if (children[i]->value != END){
					children[i]->printTrie();
				}
				else {
					println("");
				}
			}
		}
	}
}

void Node::printTrie(char val){
	if (children[con(val)] != nullptr)
	{
		if (value != ROOT)
			print(value);
			
		if (children[con(val)]->value != END){
			children[con(val)]->printTrie();
		}
		else {
			println("");
		}
	}
}

Node::~Node(){
	if (children)
		for (short i = 0; i < 27; i++)
			if (children[i] != nullptr)
				delete children[i];
				
	// print("Destroyed '");
	// print(value);
	// println("' Node!");
}