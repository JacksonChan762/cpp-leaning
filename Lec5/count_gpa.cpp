#include <iostream>
using namespace std;

int main()
{
    string letterGrade;
    int credits;
    int totalCredits = 0;
    double totalGrade = 0;
    double gpa ,gradePoint ;




    while (true){
        cout << "Type your couse credits" << endl;
        cin >> credits;
        if(credits <= 0){
            break;
        }
        cout << "Type your letterGrade" << endl;
        cin >> letterGrade;
        if(letterGrade == "A"){
            gradePoint = 4.0;
        }else if (letterGrade == "B"){
            gradePoint = 3.0;
        }else if (letterGrade == "C"){
            gradePoint = 2.0;
        }else if (letterGrade == "D"){
            gradePoint = 1.0;
        }else if (letterGrade == "F"){
            gradePoint = 0.0;
        }else{
            cout << "Invalid input, please enter your grade again!" << endl;
            continue;
        }
        totalGrade += gradePoint * credits;
        totalCredits += credits;

    }
    gpa =  totalGrade / totalCredits ; 
    cout << "your credits is " << totalCredits << endl;
    cout << "your gpa is " << gpa << endl;


}