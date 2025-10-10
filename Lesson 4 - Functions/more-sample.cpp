#include <iostream>
#include <string>
using namespace std;

// function declaration
int getProduct (int, int);
void getQuotient(int, int);
void greet();
void mention(string);

int main() {
    greet();
    string n;
    cout << "Enter your name: ";
    getline(cin, n);
    mention(n);

    int i, j, product;
    cout << "Enter value for i: ";
    cin >> i;
    cout << "Enter value for j: ";
    cin >> j;
    product = getProduct(i, j);
    cout << "Product of " << i << " and " <<j <<": " <<product << endl;
    product+=4;
    cout << "Adding 4 to product: " << product;
    

    int k, l;
    cout << "Enter value for k: ";
    cin >> k;
    cout << "Enter value for l: ";
    cin >> l;
    getQuotient(k, l);



    return 0;
}

int getProduct(int x, int y) {
    return x * y;
}

void getQuotient (int a, int b) {
    int quotient = a / b;
    cout << a << " / " << b << " = " << quotient << endl;
}

void greet() {
    cout << "Calling the greet() function." << endl;
}

void mention (string name) {
    cout << "Hello there, " << name << "!" << endl;
}