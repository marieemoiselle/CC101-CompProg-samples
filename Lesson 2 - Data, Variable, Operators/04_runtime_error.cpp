#include <iostream>
using namespace std;

int main() {
    int dividend, divisor, quotient;
    cout<<"Enter value for dividend: ";
    cin>>dividend;
    cout<<"Enter value for divisor: ";
    cin>>divisor;

    quotient = dividend/divisor;
    quotient += 4;

    cout<<"Quotient: ";
    cout<<quotient;

    // example of runtime error, input 0 as the divisor
    return 0;
}