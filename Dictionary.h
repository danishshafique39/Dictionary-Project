#pragma once
#include "Node.h"

class Dictionary
{
private:
	Node* newNode(string word, string meaning);
	Node* findMinNode(Node* n);

public:
	Dictionary();

	Node* initializeDictionary(Node* root);
	bool isEmpty(Node* root);
	Node* addWord(Node* n, string word, string meaning);
	Node* deleteWord(Node* root, string word);
	Node* searchWord(Node* root, string word, Node* temp = NULL);
	void displayAll(Node* root);
};

