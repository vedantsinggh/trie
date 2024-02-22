prod: trie.cpp main.cpp;
	g++ -o app.out main.cpp trie.cpp

run: trie.cpp main.cpp;
	clear && g++ -o app.out main.cpp trie.cpp && ./app.out