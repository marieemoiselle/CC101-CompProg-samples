#include <iostream>
#include <string>
using namespace std;

int main () {
    string your_name;
    int year_level;

    cout << "Enter your name: ";
    getline(cin, your_name);
    cout << "Enter your year level: ";
    cin >> year_level;
    
    cout << "Hello " << your_name <<"! You are in level " << year_level <<" of college!" << endl;
    return 0; 
}