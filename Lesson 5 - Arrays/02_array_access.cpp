#include <iostream>
using namespace std;

int main () {
    int numbers [5] = {3, 6, 9, 12, 15};
    int length = (sizeof(numbers)/sizeof(int));
    int lastIndex = length - 1;
    cout << "Array Length: " << length << endl;
    cout << "1st element: " << numbers[0] << endl;
    cout << "Last element: " << numbers[lastIndex] << endl;
 
    return 0;
}