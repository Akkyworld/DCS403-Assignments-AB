//Write a program to convert lowercase letters to uppercase and vice versa. Hint: Use toupper() and tolower(). Expected Input: a
#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (islower(ch)) {
        ch = toupper(ch);
    } else {
        ch = tolower(ch);
    }
    cout << "The converted character is: " << ch << endl;
    return 0;
}