#include <iostream>
#include <string>
using namespace std;

// function declaration
int addNumbers (int, int);
void subtractNumbers (int, int);
void display ();
void greet (string);
// void bash (string);

int main () {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    greet(name);


    int x, y;
    cout << "Enter value for x: ";
    cin >> x;
    cout << "Enter value for y: ";
    cin >> y;
    int sum = addNumbers(x, y);

    cout << x << " + " << y << " = " << sum << endl;

    cout << "Calling the display function: " << endl;
    display();

    cout << "Displaying the difference of two numbers: ";
    subtractNumbers(x, y);

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
    cout << a << " - " << b << " = " << diff << endl;
}

void greet (string name) {
    cout << "Hello " << name << "!" << endl;
}