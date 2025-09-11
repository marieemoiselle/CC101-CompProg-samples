#include<iostream>
using namespace std;
int main() {
	int xnum = 2;
	switch(xnum) {
		case 1:
		case 2:
             case 3:
		  cout << "x is not 4"<<endl;
             break;
		case 4:
		   cout << "x is 4"<<endl;
             break;
	}
	return 0;
}

