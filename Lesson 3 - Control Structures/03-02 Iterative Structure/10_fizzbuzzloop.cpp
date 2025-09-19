#include <iostream> 
using namespace std;

int main() {
    
    int up_bound;
    cout <<"Enter value for upper bound: ";
    cin>> up_bound;
    
    for (int i = 1; i <= up_bound; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout <<"FizzBuzz!" <<endl;
        }
        else if (i % 3 == 0) {
            cout <<"Fizz!" <<endl;
        }
        else if (i % 5 == 0) {
            cout <<"Buzz!" <<endl;
        }
        else {
            cout<< i <<endl;
        }
    }
    
    return 0;
}
