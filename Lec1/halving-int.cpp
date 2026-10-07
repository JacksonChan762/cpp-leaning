#include<iostream>
using namespace std;

int main(){
    int count = 0;
    int x;

    cout << "input your number " ;
    cin >> x;

    while(x > 0.1){
        cout << "Halving " << count ++ << "time(s); x = " << x << endl;
        x/=2;
    }
    return 0;
}