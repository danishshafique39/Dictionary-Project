#include "Node.h"

Node::Node()
{
	word = "";
	meaning = "";
}
Node::Node(string word, string meaning)
{
	this->word = word;
	this->meaning = meaning;
}

void Node::setWord(string word)
{
	this->word = word;
}
void Node::setMeaning(string meaning)
{
	this->meaning = meaning;
}
void Node::setLeft(Node* left)
{
	this->left = left;
}
void Node::setRight(Node* right)
{
	this->right = right;
}

string Node::getWord()
{
	return word;
}
string Node::getMeaning()
{
	return meaning;
}
Node* Node::getLeft()
{
	return left;
}
Node* Node::getRight()
{
	return right;
}
