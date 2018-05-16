#include <string>
#include <iostream>
#include "findDNAMatch.h"
using namespace std;

/*
int main()
{
	int i;
	string str;
	cout << "this program tests for sentence palindromes" << endl;
	cout << "indicate the end of the input with a blank line." << endl;
	for (i = 0; i < N; i++)
	{
		cout << "Enter a sentence: ";
		getline(cin, str);
		cout << "the sentence is";
		if (isSentencePalindrame(str))
			cout << " a palindrome" << endl;
		else cout << "not a palindrome" << endl;
	}
}

int main()
{
	int i, shift;
	string name;
	cout << "this program encodes a message using a caesar cipher" << endl;
	cout << ("enter the number of character positions to shift:");
	cin >> shift;
	cout << "enter a message: " << endl;
	cin >> name;
	cout << encodeCaesarCipher(name, shift) << endl;
	return 0;
}


int main()
{
	string letter;
	getline(cin, letter);
	cout << "the output is" << letter_substitution(letter) << endl;
}



int main()
{
	string letter_26, message;
	cout << "letter subsititution cipher" << endl;
	cout << "enter a 26-letter key:";
	cin >> letter_26;
	cout << "enter a message";
	cin >> message;
	cout << "encoded message:" << letter_substitution(message, letter_26) << endl;
}

*/

int main()
{
	string s1, s2;
	cin >> s1;
	cin >> s2;
	cout << findDNAMatch(s1, s2) << endl;
}