#include <iostream>
using namespace std;

int main() {
    double num1 = 85, num2 = 86, num3 = 87;
    double average = num1 + num2 + num3/3;
    // correct formula - uncomment
    // double average = (num1 + num2 + num3)/3;
    
    cout<<"Average of: " <<num1 <<", " <<num2 <<", " <<num3;
    cout<<" = " <<average;

    return 0;
}