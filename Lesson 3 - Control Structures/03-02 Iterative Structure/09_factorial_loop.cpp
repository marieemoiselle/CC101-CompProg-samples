#include <iostream> 
#include <iomanip>
using namespace std;

int main() {
    
    int value = 0, factorial = 1;
    cout <<"Enter value to get factorial: ";
    cin>> value;
    
    for(int ctr = 1; ctr <= value; ctr++) {
        factorial*=ctr;
    }
    
    cout <<"Factorial of " <<value <<" is: " <<factorial;
    
    return 0;
}
