//String Compression Compress a string by counting consecutive repeated characters. Expected Input: aaabbccccd Expected Output: a3b2c4d1
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string compressed = "";
    int count = 1;
    for (int i = 1; i < str.length(); i++) {
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            compressed += str[i - 1];
            compressed += to_string(count);
            count = 1;
        }
    }
    compressed += str[str.length() - 1];
    compressed += to_string(count);
    cout << "Compressed string: " << compressed << endl;
    return 0;
}