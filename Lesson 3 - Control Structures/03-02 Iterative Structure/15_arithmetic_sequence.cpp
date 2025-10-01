#include <iostream>
using namespace std;

int main() {
    int first, diff, n;

    cout << "Enter the first element: ";
    cin >> first;

    cout << "Enter the common difference: ";
    cin >> diff;

    // keep asking until valid (1–30)
    do {
        cout << "Enter number of elements (1 to 30): ";
        cin >> n;
        if (n < 1 || n > 30) {
            cout << "Invalid input. Please try again.\n";
        }
    } while (n < 1 || n > 30);

    cout << "Arithmetic Sequence: ";
    int term = first;  
    for (int i = 1; i <= n; i++) {
        cout << term;
        if (i < n) {
            cout << ", ";
        }
        term += diff;
    }
    cout << endl;

    return 0;
}