#include<iostream>
using namespace std;
int main() {
	for(int ctr = 1; ctr <= 10; ctr++) {
		// if the value of ctr is already divisible
		// by 5, we break the loop immediately
		if(ctr % 5 == 0) {
			break;
		}
		 cout<<ctr <<endl;
	}	

	return 0;
}