# include <iostream>
using namespace std;

int fibonacci (int);

int main () {
    int position;
    cout << "Enter position value: ";
    cin >> position;

    cout << "Fibonacci at position " << position << " is: ";
    cout << fibonacci(position) << endl;
    return 0;
}

// Recursion
int fibonacci (int n) {
    if (n <= 1) {
        return n;
        // Base case : stopping case
    }
    else {
        return fibonacci (n - 1) + fibonacci (n - 2);
        // Recursive case
    }
}