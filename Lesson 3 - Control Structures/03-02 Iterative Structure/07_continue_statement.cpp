#include<iostream>
using namespace std;
int main() {
    for(int ctr = 1; ctr <= 10; ctr++) {
    // if the value of ctr is already divisible
    // by 5, we skip 5 and still finish the loop
    if(ctr % 2 != 0) {
        continue;
    }
        cout<<ctr <<endl;
    }
    return 0;
}
