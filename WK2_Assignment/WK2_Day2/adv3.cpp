//Character Frequency Counter Count how many times each alphabet appears in a string (ignore case). Hint: Use an array of size 26 and tolower(). Expected Input: Programming Expected Output: a:1  g:2  i:1  m:2  n:1  o:1  p:1  r:2

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int count[26] = {0};
    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);
        if (isalpha(ch)) {
            count[ch - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            cout << char(i + 'a') << ":" << count[i] << " ";
        }
    }
    cout << endl;
    return 0;
}