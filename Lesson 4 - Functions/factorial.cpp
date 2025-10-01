#include <iostream>
using namespace std;

// Recursive function to compute factorial
int factorial(int n) {
    if (n == 0 || n == 1) return 1;  // Base case: 0! = 1, 1! = 1
    return n * factorial(n - 1);     // Recursive step
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    }

    return 0;
}