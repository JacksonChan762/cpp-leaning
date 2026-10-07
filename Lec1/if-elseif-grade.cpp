#include<iostream>
using namespace std;


int main(){
    char grade;
    int mark;
    cout << "Type your mark : " << endl;
    cin >> mark;

    if(mark >= 90){
        grade = 'A';
    }
    else if(mark >= 60){
        grade ='B';
    }
    else if (mark >= 20){
        grade = 'C';
    }
    else if(mark >= 10){
        grade = 'D';
    } 
    else{
        grade ='F';
    }
    cout << "the grade is " << grade << endl;

}


