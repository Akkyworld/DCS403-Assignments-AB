//char data type and operations and explicit conversion and ascii value
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    //cout << "The ASCII value of " << ch << " is: " << int(ch) << endl;
    char next = ch + 1;
    cout << "The next character after " << ch << " is: " << next << " and its ASCII value is: " << int (next) << endl;
    return 0;
}