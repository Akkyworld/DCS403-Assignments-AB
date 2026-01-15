// Write a program to assign grades bsed on marks (A,B,C,F) using switch case
#include <iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter the marks: ";
    cin >> marks;
    char grade;
    switch(marks){
        case 80 ...100:
            grade = 'A';
            break;
        case 60 ...79:
            grade = 'B';
            break;
        case 40 ...59:
            grade = 'C';
            break;
        default:
            grade = 'F';
            break;
    }
    cout << "Your grade is " << grade << endl;
    return 0;
}