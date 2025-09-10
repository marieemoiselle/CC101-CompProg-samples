#include <iostream>
using namespace std;

int main() {
    cout <<"Enter a positive number: ";
    int value;
    cin>>value;

    if (value >= 0) {
        int rem = value % 2;
        if (rem == 0) {
            cout <<value <<" is an even number" <<endl;
        }
        else {
            cout <<value <<" is an odd number" <<endl;
        }
    }
    return 0;
}