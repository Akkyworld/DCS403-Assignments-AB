//Remove All Non-Alphabetic Characters Remove digits and special symbols from a string, keeping only letters. Expected Input: C++123 is #1! Expected Output: Cis
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {
            cout << str[i];
        }
    }
    cout << endl;
    return 0;
}