#include <iostream> 
#include <iomanip>
using namespace std;

int main() {
    
    int up_bound = 0, sum = 0;
    
    do {
        cout <<"Enter upper bound value: ";
        cin>> up_bound;
    } while (up_bound < 1);
    
    cout<<"The inputted upper bound is: " <<up_bound;
    
    return 0;
}
