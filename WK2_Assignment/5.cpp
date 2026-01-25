// Write a program to check if a number is positive and even, positive and odd, negative or zero
#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number > 0){
        if (number % 2 == 0){
            cout << "The number is positive and even." << endl;
        }else{
            cout << "The number is positive and odd." << endl;
        }
    }else if (number < 0){
        cout << "The number is negative." << endl;
    }else{
        cout << "The number is zero." << endl;
    }
    return 0;
}