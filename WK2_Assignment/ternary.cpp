//Use a ternary operator to find the smaller of two numbers.
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    int smaller = (num1 < num2) ? num1 : num2;
    cout << "The smaller number is: " << smaller << endl;
    return 0;
}

