#include <iostream> 
using namespace std;

int main() {
    int up_bound = 0, ctr = 0, sum = 0;

    do {
    cout<<"Enter value for upper bound: ";
    cin>> up_bound;
    } while (up_bound < 1);
    
    ctr = up_bound;
    
    while (ctr > 0) {
        sum += ctr;
        ctr--;
    }
    
    cout <<"Sum from 1 to " <<up_bound <<" is: " <<sum <<endl;
    
    return 0;
}
