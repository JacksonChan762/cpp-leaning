#include<iostream>
using namespace std;

int main(){
    int factorial = 1;
    int number ;

    cout << "non-negative integer: ";
    cin >>  number;

    while(number > 0){
        factorial *= number;
        --number;
    }
    cout  << factorial << endl;
}