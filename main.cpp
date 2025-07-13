#include <string>
#include "Dictionary.h"
#include <stdlib.h>

int main()
{
	Node* root = NULL;
	Dictionary d;
	int choice;
	root = d.initializeDictionary(root);

	system("COLOR f4");


	cout << "\n\t\t\t\t\t       " << "************";
	cout << "\n\t\t\t\t\t       " << "*Dictionary*" << endl;
	cout << "\t\t\t\t\t       " << "************" << endl;
	system("pause");
	cout << endl;

	do
	{
		system("cls");
		system("COLOR f3");

		cout << "\n\t\t\t\t\t\t";
		cout << "\n\t\t\t\t\t       " << "************";
		cout << "\n\t\t\t\t\t       " << "*Dictionary*" << endl;
		cout << "\t\t\t\t\t       " << "************" << endl;

		cout << "\n\t\t\t\t\t\t\t\t";
		cout << "\n\t\t\t\t\t\t\t\t";
		cout << "\n\t\t\t\t\tPress 1 to Add a word\n";
		cout << "\t\t\t\t\tPress 2 to Search for a word\n";
		cout << "\t\t\t\t\tPress 3 to Delete a word\n";
		cout << "\t\t\t\t\tPress 4 to Display all words\n";
		cout << "\t\t\t\t\tPress 0 to Exit\n";
		cout << "\t\t\t\t\tYour choice: ";
		cin >> choice;

		switch (choice)
		{
		case 0:
			break;

		case 1:
		{
			string word, meaning;

			cout << "\t\t\t\t\tEnter a word: ";
			cin.ignore();
			getline(cin, word);
			cout << "\t\t\t\t\tEnter its meaning: ";
			getline(cin, meaning);
			if (word[0] < 123 && word[0] > 96)
				word[0] -= 32;
			for (int i = 1; i < word.length(); i++)
			{
				if (word[i] >=65 && word[i]<=90) // small
						word[i] += 32;
				
			}
			Node* a1=d.addWord(root, word, meaning);
			if (a1->getWord() == word)
			{
				break;
			}
			cout << "\t\t\t\t\t" << word << " has been added successfully";
			break;
		}
		case 2:
		{
			string search, choice2;
			Node* c = NULL;

			cout << "\t\t\t\t\tEnter word to search for: ";
			cin.ignore();
			getline(cin, search);

			if (search[0] < 123 && search[0] > 96)
				search[0] -= 32;

			c = d.searchWord(root, search);

			if (c->getWord() == search)
				cout << "\t\t\t\t\t" << c->getWord() << ": " << c->getMeaning() << "\n";
			else
			{
				cout << "\t\t\t\t\tThe entered word could not be found."
					<< "\n\t\t\t\t\tDid you mean \"" << c->getWord() << "\"? (Y/N): ";
				cin >> choice2;
				while (choice2 != "Y" && choice2 != "y" && choice2 != "N" && choice2 != "n")
				{
					cout << "\t\t\t\t\tPlease enter a valid charachter: ";
					cin >> choice2;
				}

				if (choice2 == "Y" || choice2 == "y")
					cout << "\t\t\t\t\t" << c->getWord() << ": " << c->getMeaning() << "\n";
			}
			break;
		}
		case 3:
		{
			string word;

			cout << "\t\t\t\t\tEnter word to delete: ";
			cin.ignore();
			getline(cin, word);

			if (word[0] < 123 && word[0] > 96)
				word[0] -= 32;

			d.deleteWord(root, word);
			break;
		}
		case 4:
			d.displayAll(root);
			break;

		default:
			cout << "\t\t\t\t\t\n->Please enter a valid number: !!!";
		}

		cout << "\n\n";
		cout << "\t\t\t\t\t";

		system("pause");

	} while (choice != 0);
}
