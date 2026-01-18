//Write a program to find the largest and smallest of two numbers using fmax() and fmin(). Hint: Use fmax(a, b) and fmin(a, b) from <cmath>.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    double largest = fmax(num1, num2);
    double smallest = fmin(num1, num2);
    cout << "The largest number is: " << largest << endl;
    cout << "The smallest number is: " << smallest << endl;
    return 0;
}