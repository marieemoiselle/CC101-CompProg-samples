#include <iostream>
using namespace std;

int main() {
	int num1 = 18;
	int num2 = 4;

	num1 += num2;   // Same as  num1 = num1 + num2
	cout<<"num1 += num2: " << num1 << endl;

	num1 -= num2;   // Same as  num1 = num1 - num2
	cout<<"num1 -= num2: " << num1 << endl;

	num1 *= num2;   // Same as  num1 = num1 * num2
	cout<<"num1 *= num2: " << num1 << endl;

	num1 /= num2;   // Same as  num1 = num1 / num2
	cout<<"num1 /= num2: " << num1 << endl;

	num1 %= num2;   // Same as  num1 = num1 % num2
	cout<<"num1 %= num2: " << num1 << endl;

	return 0;
}