#include "Dictionary.h"

Dictionary::Dictionary()
{
}

Node* Dictionary::initializeDictionary(Node* root)
{
	root = addWord(root, "Men", "More than one adult male human beings.");
	root = addWord(root, "Island", "A piece of land surrounded by water.");
	root = addWord(root, "Heavy", "Of great weight; difficult to lift or move.");
	root = addWord(root, "Feel", "Be aware of a person or object through touching or being touched.");
	root = addWord(root, "Bottom", "The lowest point or part of something.");
	root = addWord(root, "Always", "At all times; on all occasions.");
	root = addWord(root, "Again", "Another time; once more.");
	root = addWord(root, "Behind", "At or to the far side of something, typically so as to be hidden by it.");
	root = addWord(root, "Country", "A nation with its own government, occupying a particular territory.");
	root = addWord(root, "Draw", "Produce (a picture or diagram) by making lines and marks on paper with a pencil, pen, etc.");
	root = addWord(root, "Experience", "Practical contact with and observation of facts or events.");
	root = addWord(root, "Ball", "A solid or hollow spherical or egg-shaped object that is kicked, thrown, or hit in a game.");
	root = addWord(root, "Can", "Be able to / be permitted to");
	root = addWord(root, "Change", "Make (someone or something) different; alter or modify.");
	root = addWord(root, "Dark", "With little or no light.");
	root = addWord(root, "Each", "Used to refer to every one of two or more people or things, regarded and identified separately.");
	root = addWord(root, "Friend", "A person with whom one has a bond of mutual affection.");
	root = addWord(root, "Gold", "A yellow precious metal, the chemical element of atomic number 79, used in jewellery and decoration.");
	root = addWord(root, "Hand", "The end part of a person's arm beyond the wrist, including the palm, fingers, and thumb.");
	root = addWord(root, "I", "The 9th letter of the alphabet / used by a speaker to refer to himself or herself.");
	root = addWord(root, "Language", "The main method of communication, consisting of words used in a structured way and conveyed by speech or writing.");
	root = addWord(root, "Letter", "A written, typed, or printed communication, sent in an envelope by post or messenger.");
	root = addWord(root, "Look", "Direct one's gaze toward someone or something or in a specified direction.");
	root = addWord(root, "Morning", "the period of time between midnight and noon, especially from sunrise to noon.");
	root = addWord(root, "Mountain", "A large natural elevation of the earth's surface rising abruptly from the surrounding level; a large steep hill.");
	root = addWord(root, "Only", "No one or nothing more besides; solely.");
	root = addWord(root, "Probably", "Almost certainly; as far as one knows or can tell.");
	root = addWord(root, "Relationship", "The way in which two or more people or things are connected.");
	root = addWord(root, "Sentence", "A set of words that is complete in itself, typically containing a subject and predicate.");
	root = addWord(root, "Small", "Of a size that is less than normal or usual.");
	root = addWord(root, "Strong", "Having the power to move heavy weights or perform other physically demanding tasks.");
	root = addWord(root, "Think", "Direct one's mind towards someone or something; use one's mind actively to form connected ideas.");
	root = addWord(root, "Understand", "Perceive the intended meaning of words, a language, or a speaker.");
	root = addWord(root, "Weight", "A body's relative mass or the quantity of matter contained by it; the heaviness of a person or thing.");
	root = addWord(root, "Wonder", "A feeling of amazement and admiration, caused by something beautiful, remarkable, or unfamiliar.");
	root = addWord(root, "Year", "The time taken by the earth to make one revolution around the sun.");
	root = addWord(root, "White", "Of the colour of milk or fresh snow, due to the reflection of all visible rays of light; the opposite of black.");
	root = addWord(root, "Vowel", "a letter representing a vowel sound, such as a, e, i, o, u.");
	root = addWord(root, "Together", "With or in proximity to another person or people.");
	root = addWord(root, "Teach", "Impart knowledge to or instruct (someone) as to how to do something.");
	root = addWord(root, "Special", "Better, greater, or otherwise different from what is usual.");
	root = addWord(root, "Shown", "Allowed or caused something to be visible.");
	root = addWord(root, "Show", "Allow or cause (something) to be visible.");
	root = addWord(root, "Round", "Shaped like a circle or cylinder.");
	root = addWord(root, "Perhaps", "Used to express uncertainty or possibility.");
	root = addWord(root, "Over", "Extending above an area from a vantage point.");
	root = addWord(root, "Never", "At no time in the past or future; not ever.");
	root = addWord(root, "Vantage", "A place or position affording a good view of something.");
	root = addWord(root, "Object", "A material thing that can be seen and touched.");
	root = addWord(root, "Against", "In opposition to.");
	root = addWord(root, "Build", "Construct (something) by putting parts or material together.");
	root = addWord(root, "Community", "A group of people living in the same place or having a particular characteristic in common.");
	root = addWord(root, "Develop", "Grow or cause to grow and become more mature, advanced, or elaborate.");
	root = addWord(root, "Effort", "A vigorous or determined attempt.");
	root = addWord(root, "Family", "A group of people related by blood or marriage / a group of related things.");
	root = addWord(root, "Girl", "A young or relatively young female human.");
	root = addWord(root, "Horse", "A large plant-eating domesticated mammal with solid hoofs and a flowing mane and tail.");
	root = addWord(root, "Include", "Comprise or contain as part of a whole.");
	root = addWord(root, "Just", "Based on or behaving according to what is morally right and fair.");
	root = addWord(root, "King", "The male ruler of an independent state, especially one who inherits the position by right of birth.");
	root = addWord(root, "Learn", "Gain or acquire knowledge of or skill in (something) by study, experience, or being taught.");
	root = addWord(root, "Machine", "An apparatus using mechanical power and having several parts that perform together, each with a definite function.");
	root = addWord(root, "No", "Not any / not at all / used to give a negative response.");
	root = addWord(root, "Of", "Expressing the relationship between a part and a whole.");
	root = addWord(root, "Off", "Away from the place in question; to or at a distance.");
	root = addWord(root, "Provide", "Make available for use; supply.");
	root = addWord(root, "Question", "A sentence worded or expressed so as to elicit information.");
	root = addWord(root, "Quick", "Moving fast or doing something in a short time.");
	root = addWord(root, "Receive", "Be given, presented with, or paid (something).");
	root = addWord(root, "Sing", "Make musical sounds with the voice, especially words with a set tune.");
	root = addWord(root, "System", "A set of things working together as parts of a mechanism or an interconnecting network; a complex whole.");
	root = addWord(root, "Their", "Belonging to or associated with the people or things previously mentioned or easily identified.");
	root = addWord(root, "There", "In, at, or to that place or position.");
	root = addWord(root, "They're", "They are.");
	root = addWord(root, "Whilst", "During the time that; at the same time as; whereas (indicating a contrast)");
	root = addWord(root, "Upon", "More formal term for on, especially in abstract senses.");
	root = addWord(root, "Voice", "The sound produced in a person's larynx and uttered through the mouth, as speech or song.");
	root = addWord(root, "Walk", "Move at a regular pace by lifting and setting down each foot in turn, never having both feet off the ground at once.");
	root = addWord(root, "Young", "Having lived or existed for only a short time.");
	root = addWord(root, "Xenophobia", "Dislike of or prejudice against people from other countries.");
	root = addWord(root, "Zealous", "Having or showing zeal.");
	root = addWord(root, "Zeal", "Great energy or enthusiasm in pursuit of a cause or an objective.");

	return root;
}

Node* Dictionary::newNode(string word, string meaning)
{
	Node* temp = new Node;
	temp->setWord(word);
	temp->setMeaning(meaning);
	return temp;
}
Node* Dictionary::findMinNode(Node* n)
{
	if (isEmpty(n))
		return NULL;
	if (n->getLeft() != NULL)
		return findMinNode(n->getLeft());
	return n;
}

bool Dictionary::isEmpty(Node* root)
{
	if (root == NULL)
		return true;
	return false;
}
Node* Dictionary::addWord(Node* n, string word, string meaning)
{
	if (isEmpty(n))
		return newNode(word, meaning);
	if (word == n->getWord())
	{
		return n;
	}
	if (word < n->getWord())
		n->setLeft(addWord(n->getLeft(), word, meaning));
	else if (word > n->getWord())
		n->setRight(addWord(n->getRight(), word, meaning));
	return n;
}
Node* Dictionary::deleteWord(Node* root, string word)
{
	if (isEmpty(root))
		return root;
	if (word < root->getWord())
		root->setLeft(deleteWord(root->getLeft(), word));
	else if (word > root->getWord())
		root->setRight(deleteWord(root->getRight(), word));
	else
	{
		if (root->getLeft() == NULL)
		{
			Node* temp = root->getRight();
			delete root;
			root = NULL;
			return temp;
		}
		else if (root->getRight() == NULL)
		{
			Node* temp = root->getLeft();
			delete root;
			root = NULL;
			return temp;
		}
		Node* temp = findMinNode(root->getRight());
		root->setWord(temp->getWord());
		root->setRight(deleteWord(root->getRight(), temp->getWord()));
	}
	return root;
}
Node* Dictionary::searchWord(Node* root, string word, Node* temp)
{
	if (isEmpty(root))
		return temp;
	else if (root->getWord() == word)
		return root;
	else if (word < root->getWord())
	{
		temp = root;
		return searchWord(root->getLeft(), word, temp);
	}
	else
	{
		temp = root;
		return searchWord(root->getRight(), word, temp);
	}
}
void Dictionary::displayAll(Node* root)
{
	if (!isEmpty(root))
	{
		if (root->getLeft() != NULL)
			displayAll(root->getLeft());
		cout << "\t\t\t\t\t" << root->getWord() << "\n";
		displayAll(root->getRight());
	}
}
