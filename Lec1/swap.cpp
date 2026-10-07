#include<iostream>
using namespace std;

int main(){
    int x , y;
    int temp;

    cout << "Two integers with spaces" ;
    cin >> x >> y;

    if (x>y){
        temp = x;
        x = y;
        y = temp;
    }
    cout << x << '\t' << y << endl;
    return 0;

}