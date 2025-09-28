#include <iostream>
using namespace std;

int main() {
    
    char value;
    cout <<"Enter a character: ";
    cin>>value;
    
    if((value >= 65 && value <= 90) || (value >= 97 && value <= 122)) {
        cout <<value <<" is a letter\n";
    }
    else {
        cout <<value <<" is not a letter.\n";
    }

    
    return 0;
}