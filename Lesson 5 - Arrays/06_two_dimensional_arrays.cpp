#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    const int rows = 3;
    const int cols = 2;
    int nums[rows][cols];

    // print the number of rows
    cout << "Length of rows: " << rows << endl;

    // ensure there is at least one row before accessing length of columns
    if (rows > 0) {
        cout << "Length of columns: " << cols << endl;
    } else {
        cout << "Array is empty, no columns." << endl;
    }

    // assigning values to the array
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            nums[row][col] = (row + 1) * (col + 1);
        }
    }

    // using regular for loops to display the elements and calculate the sum
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            cout << nums[row][col] << " ";
            sum += nums[row][col];
        }
        cout << endl;
    }

    // print the total sum
    cout << "Summation: " << sum << endl;

    return 0;
}

/*
 *   row 0: 1, 2
 *   row 1: 2, 4
 *   row 2: 3, 6
 */
