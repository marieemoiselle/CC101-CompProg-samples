#include <iostream>
#include <string>

using namespace std;

int main() {
	string userInput;
    int number;
	cout<< "Enter a string: ";
	cin>> userInput;
    cout<< "Enter a number: ";
    cin>> number;
	cout<< "You entered: " << userInput << endl;
    cout<< "Number: " << number;

	return 0;
}