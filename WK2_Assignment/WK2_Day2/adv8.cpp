//Anagram Checker Check if two strings are anagrams (contain same characters in any order). Expected Input: listen silent Expected Output: Strings are anagrams.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    if (str1 == str2) {
        cout << "Strings are anagrams." << endl;
    } else {
        cout << "Strings are not anagrams." << endl;
    }
    return 0;
}