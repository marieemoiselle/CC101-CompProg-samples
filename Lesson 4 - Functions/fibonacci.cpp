#include <iostream>
using namespace std;

int fibonacci(int);

int main () {
    int position, value;
    cout << "Enter value for position: ";
    cin >> position;
    value = fibonacci(position);

    cout << "Fibonacci number at position " << position << " is: " << value;

    return 0;
}

int fibonacci (int n) {
    if (n <= 1) {
        return n;
    }
    else {
        return fibonacci (n-1) + fibonacci (n-2);
    }
}