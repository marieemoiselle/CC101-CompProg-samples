#include <iostream>
using namespace std;

int main() {
    int values [5] = {98, 94, 93, 97, 100};
    int length = (sizeof(values)/sizeof(int));
    int lastIndex = length - 1;
    int sum = 0;
    // get the summation

    for (int idx = 0; idx < length; idx++) {
        if (idx != lastIndex) {
            cout << values[idx] << " + ";
        }
        else {
            cout << values[idx] << " = ";
        }
        sum += values[idx];
    }

    cout << sum << endl;

    return 0;
}