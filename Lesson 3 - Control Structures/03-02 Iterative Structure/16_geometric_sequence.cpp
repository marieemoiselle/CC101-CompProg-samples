#include <iostream>
using namespace std;

int main() {
    int first, ratio, n;

    cout << "Enter the first element: ";
    cin >> first;

    cout << "Enter the common ratio: ";
    cin >> ratio;

    // keep asking until valid (1–30)
    do {
        cout << "Enter number of elements (1 to 30): ";
        cin >> n;
        if (n < 1 || n > 30) {
            cout << "Invalid input. Please try again.\n";
        }
    } while (n < 1 || n > 30);

    cout << "Geometric Sequence: ";
    int term = first;  
    for (int i = 1; i <= n; i++) {
        cout << term;
        if (i < n) {
            cout << ", ";
        }
        term *= ratio;
    }
    cout << endl;

    return 0;
}