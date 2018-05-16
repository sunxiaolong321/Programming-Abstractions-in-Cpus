#include <iostream>
#include <string>
#include "scrabble.h"
#include "acronym.h"
#include "removecharacters.h"
using namespace std;

/*
int main()
{
	string word;
	cout << "your word" << endl;
	getline(cin, word);
	cout << "the fraction is: " << scrabble(word) << endl;
}
*/

int main()
{
	string word, c1, c2;
	cout << "your word" << endl;
	cin >> word;
	cin >> c1;
	cin >> c2;
	cout << replaceALL(word, c1, c2) << endl;
}

