#include<iostream>
using namespace std;

int main(){
    int x;
    cout << "type your integer: " ;
    cin >> x;
    int max = x;


    cout << "type your next integer: " ;
    while(cin >> x){
        if(x > max){
            max = x;
            cout << "enter next number";
        }
        else{
            cout << "enter next number";
        }
    }
   cout << "the Max number is " << max << endl;

}