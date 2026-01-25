//Reverse Digits of a Number (Using while loop) Problem: Input a number and reverse its digits. Example: 1234 → 4321
#include <iostream>
using namespace std;
int main() {
    int num, reversed = 0;
    cout << "Enter a number: ";
    cin >> num;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    cout << "Reversed number: " << reversed << endl;
    return 0;
}