#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int num1 = 10;
	float num2 = 3.14159;
	char letter = 'A';

	cout<< "Integer: " <<num1 <<endl;
	cout<< "Float: " <<fixed <<setprecision(2) <<num2 <<endl;
	cout<< "Character: " <<letter <<endl;

	return 0;
}