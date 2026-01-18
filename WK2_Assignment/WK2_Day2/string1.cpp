//Write a program to find the length of a string. Hint: Use length() or size() function. Expected Input: Programming Expected Output: Length of string: 11
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str = "Programming";
    int length = str.length();
    cout << "Length of string: " << length << endl;
    return 0;
}
