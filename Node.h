#pragma once
#include <iostream>
using namespace std;

class Node
{
private:
	string word;
	string meaning;
	Node* left = NULL;
	Node* right = NULL;

public:
	Node();
	Node(string word, string meaning);

	void setWord(string word);
	void setMeaning(string meaning);
	void setLeft(Node* left);
	void setRight(Node* right);

	string getWord();
	string getMeaning();
	Node* getLeft();
	Node* getRight();


}; 
