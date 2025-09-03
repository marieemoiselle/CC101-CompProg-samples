#include <iostream>
using namespace std;

int main(){
    int num1, num2, sum, diff, product, quotient, rem;
    cout<<"Enter value for num1: ";
    cin>>num1;
    cout<<"Enter value for num2: ";
    cin>>num2;

    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    rem = num1 % num2;

    cout<<"Sum: " <<sum <<endl;
    cout<<"Difference: " <<diff <<endl;
    cout<<"Product: " <<product <<endl;
    cout<<"Quotient: " <<quotient <<endl;
    cout<<"Remainder: " <<rem <<endl;

    return 0;
}