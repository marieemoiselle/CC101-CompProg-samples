#include <iostream>
using namespace std;

int main(){
    // DECLARE a, b, c
    int a, b, c;
    
    //READ a, b, c
    cout<< "Enter value for a: ";
    cin>> a;
    cout<< "Enter value for b: ";
    cin>> b;
    cout<< "Enter value for c: ";
    cin>> c;
    
    // COMPARISON PROCESS
    if(a > b){
        if(a > c){
            cout<<a <<" is the largest number.\n";
        }
        else {
            cout <<c <<" is the largest number.\n";
        }
    }
    else {
        if(b > c){
            cout<<b <<" is the largest number.\n";
        }
        else {
            cout<<c <<" is the largest number.\n";
        }
    }
    
    return 0;
}