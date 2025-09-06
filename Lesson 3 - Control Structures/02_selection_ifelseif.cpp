#include<iostream>
using namespace std;
int main() {
    float grade;
    cout <<"Enter grade: ";
    cin >> grade;
     if(grade == 1.00) {
        cout<< "Excellent";
      }
    else if(grade == 2.00) {
        cout<< "Meritorious";
      }
    else if(grade == 3.00) {
        cout<< "Passing";
      }
    else {
        cout << "No description.";
      }
    return 0;
}


