//Remove Vowels from a String Remove all vowels from a string. Expected Input: Education Expected Output: dctn
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string result;
    for (char ch : str) {
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            result += ch;
        }
    }
    cout << "String without vowels: " << result << endl;
    return 0;
}