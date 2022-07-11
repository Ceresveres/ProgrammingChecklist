#include <iostream>
#include <string>

using namespace std;

void stringConcatenation() {
	string a, b; 
	cout << "Input the first string: ";
	getline(cin, a);
	cout << "Input the second string: ";
	getline(cin, b);

	cout << a << " " << b << endl;
}
