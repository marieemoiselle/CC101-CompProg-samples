#include <iostream>
using namespace std;

int main() {
    int value;
    cout <<"Enter a value: ";
    cin>> value;

    if (value % 3 == 0 && value % 5 == 0) {
        cout <<"Fizz!" <<endl;
    }

    else if (value % 3 == 0) {
        cout <<"Fizz!" <<endl;
    }

    else if (value % 5 == 0) {
        cout <<"Buzz!" <<endl;
    }

    else {
        cout <<value;
    }

    return 0;
}