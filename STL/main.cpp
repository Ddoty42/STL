#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

char character(char, int);

int main() {
	char start = 'a';
	int offset = 1;
	char endLetter = 0;

	try {
		endLetter = character(start, offset);
	}
	catch (string invalidCharacterException) {
		cout << invalidCharacterException;
	}
	catch (const char invalidRangeException) {
		cout << invalidRangeException;
	}
	
	cout << endLetter;

}

char character(char start, int offset) {

	char newChar;

	newChar = char(start + offset);

	if (!isalpha(start)) {
		string invalidCharacterException = "ERROR: Enter a letter!\n";
		throw invalidCharacterException;
	}
	
	if (!isalpha(newChar)) {
		string invalidRangeException = "ERROR: Out of Range!\n";
		throw invalidRangeException;
	}
	
	return newChar;
}