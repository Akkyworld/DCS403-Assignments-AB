//Character Case Alternator Convert every alternate character in a string to uppercase, starting with lowercase. Expected Input: hello world Expected Output: hElLo wOrLd
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        if (i % 2 == 0) {
            str[i] = tolower(str[i]);
        } else {
            str[i] = toupper(str[i]);
        }
    }
    cout << "Modified string: " << str << endl;
    return 0;
}