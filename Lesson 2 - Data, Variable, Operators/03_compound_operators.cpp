# include <iostream>
using namespace std;

int main() {
    int value = 5;
    cout<<"Value before using ++: " <<value <<endl;
    value++;
    cout<<"Value after ++: " <<value <<endl;
    value+=3;
    cout<<"Value after value+=3: " <<value <<endl;
    value--;
    cout<<"Value after using --: " <<value; 
    return 0;
}