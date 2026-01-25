//Write a program to check if a character is a letter, digit, or special character.Hint: Use isalpha(), isdigit(), and ispunct() from <cctype>
#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (isalpha(ch)) {
        cout << ch << " is a letter." << endl;
    } else if (isdigit(ch)) {
        cout << ch << " is a digit." << endl;
    } else if (ispunct(ch)) {
        cout << ch << " is a special character." << endl;
    } else {
        cout << ch << " is not a letter, digit, or special character." << endl;
    }
    return 0;
}