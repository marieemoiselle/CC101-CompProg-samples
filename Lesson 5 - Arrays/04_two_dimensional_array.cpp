#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int values[3][3] = {
        {21, 28, 135}, 
        {24, 232, 40},
        {327, 36, 45}
    }; // this is a 3x3 array

    int rows = sizeof(values) / sizeof(values[0]);
    int cols = sizeof(values[0]) / sizeof(values[0][0]);

    cout << "Rows: " << rows << endl;
    cout << "Columns: " << cols << endl;

    cout << "Array Elements" << endl;

    // traversal - outer loop for the rows
    for (int row = 0; row < rows; row++) {
        // inner loop for the columns
        for (int col = 0; col < cols; col++) {
            cout << setw(4) << values[row][col] <<" ";
            // to set the alignment for values
            // setw(4) from iomanip
        }
        cout << endl;
    }
    return 0;
}