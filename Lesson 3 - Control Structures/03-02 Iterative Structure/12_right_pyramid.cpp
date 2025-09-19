#include <iostream> 
#include <iomanip>
using namespace std;

int main() {
    
    /*
    
    *
    * *
    * * *
    * * * *
    * * * * *
    
    */
    
    int rows = 5;
    // outer loop -  number of rows
    for (int i = 1; i <= rows; i++) {
        // inner loop - number of * in a row
        for(int j = 1; j <= i; j++) {
            cout <<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}
