#include<iostream>
using namespace std;

int main()
{
    bool x = true;
    bool y = false;
    cout << x << " && " << y << " = " << (x && y) << endl << endl;

    cout << boolalpha; // To print booleans in English
    cout << x << " && " << y << " = " << (x && y) << endl << endl;


    return 0;
}   