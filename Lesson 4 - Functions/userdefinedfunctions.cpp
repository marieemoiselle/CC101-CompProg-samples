#include <iostream>
using namespace std;

// function declaration
int addNumbers (int, int);
void subtractNumbers (int, int);
void display ();
void greet (string);
void bash (string);

int main () {
    bash ("BinibiningMia");
    return 0;
}

int addNumbers (int x, int y) {
    int sum = x + y;
    return sum;
}

void display() {
    cout << "Called the display() function." << endl;
}

void subtractNumbers (int a, int b) {
    int diff = a - b;
    cout << a << " - " << b << " = " << diff;
}

void greet (string name) {
    cout << "Hello " << name << "!" << endl;
}

void bash (string x) {
    cout << "Si " << x << " ay user." << endl;
}