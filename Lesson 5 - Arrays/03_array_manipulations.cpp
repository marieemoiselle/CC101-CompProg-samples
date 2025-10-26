#include <iostream>
using namespace std;

int main () {
    string students[5] = {"Anya", "Beccy", "Damian", "Emile", "Ewen"};
    int length = (sizeof(students)/sizeof(string));
    cout << "Length: " << length << endl;

    cout << "Before modifying 4th element: " << endl;
    for (int i = 0; i < length; i++) {
        cout << "students[" <<i <<"] = " << students[i] << endl;
    }
    // manipulation
    students[3] = "Bill"; // changed 4th element to "Bill"

    // traversal - using loop
    cout << endl << "After modifying 4th element: " << endl;
    for (int j = 0; j < length; j++) {
        cout << "students[" <<j <<"] = " << students[j] << endl;
    }
    
    return 0;
}