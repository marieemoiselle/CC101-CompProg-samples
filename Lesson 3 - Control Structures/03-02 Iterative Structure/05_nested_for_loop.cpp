#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter value for rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i) {
        for(int j = 1; j <= i; ++j) {
             //inner loop for stars
                    cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}
