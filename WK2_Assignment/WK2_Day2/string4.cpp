//Write a program to concatenate two strings.
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);
    string str3 = str1 + " " + str2;
    cout << "Concatenated string: " << str3 << endl;
    return 0;
}


