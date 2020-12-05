#include <iostream>
#include <algorithm>

using namespace std;

char character(char, int);

int main() {

	char a = 'a';

	cout << char(a + 1);

}

char character(char start, int offset) {

	
	cout << "Enter a letter: ";
	cin >> start;

	cout << "Enter a number greater than 0: ";
	cin >> offset;


}