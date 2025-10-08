#include<iostream>
using namespace std;
int main(void) {
	int num = 5;
	switch(num) {
		case 0:
		case 1:
		case 2:
        case 3:
		  cout << "x is not 4"<<endl;
             break;
		case 4:
		   cout << "x is 4"<<endl;
             break;
		default:
			cout<<"x is greater than 4." <<endl;
	}
	return 0;
}
