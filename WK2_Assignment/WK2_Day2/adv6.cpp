//Count Words in a Sentence Count how many words are in a sentence. Hint: Count spaces while ignoring multiple consecutive spaces. Expected Input: This  is   a test Expected Output: Number of words: 4

#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    int count = 1;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            count++;
        }
    }
    cout << "Number of words: " << count << endl;
    return 0;
}