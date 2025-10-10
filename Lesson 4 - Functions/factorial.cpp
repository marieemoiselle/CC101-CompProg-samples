#include <iostream>
using namespace std;

int factorial (int);

int main () {
    int num;
    cout <<"Enter value for num: ";
    cin >> num;
    int result = factorial(num);
    cout <<"Factorial of " << num << " is: " << result << endl;

    return 0;
}

int factorial (int n) {
    // BASE CASE
    if (n == 1 || n == 0) {
        return 1;
    }
    else {
        // RECURSIVE CASE
        return n * factorial (n - 1);
    }
}