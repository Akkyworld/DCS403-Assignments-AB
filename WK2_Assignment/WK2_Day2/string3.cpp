//Write a program to check if a string is a palindrome. Hint: Compare the string with its reversed version. Expected Input: madam Expected Output: The string is a palindrome.
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    if (str == reversed) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}
