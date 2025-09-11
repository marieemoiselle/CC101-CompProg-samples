#include<iostream>
using namespace std;
int main() {
	int numval= 5; //counter value
	int factorial = 1;

	for (int ctrval=1; ctrval<=numval; ctrval++) {
		factorial *= ctrval;
         //factorial = factorial*ctrval
	}
	cout<<"Factorial of " <<numval <<": " <<factorial;

	return 0;
}