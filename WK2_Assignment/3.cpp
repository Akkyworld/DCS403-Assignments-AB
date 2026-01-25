// Write a program to assign grades bsed on marks (A,B,C,F)
#include <iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter the marks: ";
    cin >> marks;
    char grade;
    if (marks >= 80 && marks <= 100){
        grade = 'A';
    }else if (marks >= 60){
        grade = 'B';
    }else if (marks >= 40){
        grade = 'C';
    }else{
        grade = 'F';
    }
    cout << "Your grade is " << grade << endl;
    return 0;
}

