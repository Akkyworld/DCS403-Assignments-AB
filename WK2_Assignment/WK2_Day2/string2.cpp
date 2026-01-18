//Write a program to reverse a string. Hint: Use reverse(str.begin(), str.end()). Expected Input: Hello Expected Output: Reversed string: olleH
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string str = "Hello";
    reverse(str.begin(), str.end());
    cout << "Reversed string: " << str << endl;
    return 0;
}
