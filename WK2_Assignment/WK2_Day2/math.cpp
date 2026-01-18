//Write a program to find the square root, power, and absolute value of a number using mathematical functions. 
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double number;
    cout << "Enter a number: ";
    cin >> number;
    double squareRoot = sqrt(number);
    double power = pow(number, 2);
    double absoluteValue = fabs(number);
    cout << "The square root of " << number << " is " << squareRoot << endl;
    cout << number << " raised to the power of 2 is " << power << endl;
    cout << "The absolute value of " << number << " is " << absoluteValue << endl;
    return 0;
}