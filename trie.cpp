#include "trie.h"

Node::Node(){
	value = '#';
}

Node::Node(char val){
	value = val;
	for (short i = 0; i < 27; i++){
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
				if (value != ROOT){
					print(value);
				}
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

void Node::printTrie(const char val)
{	
	if (children[con(val)] != nullptr)
	{
		if (value != ROOT){
			print(value);
		}
		if (children[con(val)]->value != END){
			children[con(val)]->printTrie();
		}
		else {
			println("");
		}
	}
}

void Node::printTrie(const char* val)
{	
	if (children[con(*val)] != nullptr)
	{
		if (value != ROOT){
			print(value);
		}
		if (children[con(*val)]->value != END){
			children[con(*val)]->printTrie(*(++val));
		}
		else {
			println("");
		}
	}
}




Node::~Node(){
	if (children){
		for (short i = 0; i < 27; i++){
			if (children[i] != nullptr){
				delete children[i];
			}
		}
	}
}