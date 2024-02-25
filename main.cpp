#include "trie.h"

int main()
{
	Node* node = new Node;
	node->append('A')->append('P')->append('P')->append('L')->append('E')->append(END);
	node->append('A')->append('R')->append('M')->append(END);
	node->append('A')->append('S')->append('S')->append(END);
	node->append('S')->append('S')->append('S')->append(END);
	println("");
	char* s = "AP";
	delete node;
	return 0;
}
