#include<iostream>
using namespace std;


int main(){
    int factorial = 1;
    int number;

    cout << "Enter a non-negative integer: ";
    cin >> number;

    for(int j = 1 ; j < number ; j++){
        factorial *= j;
    }
    cout << number << "! = " << factorial << endl ; 
    return 0;
}