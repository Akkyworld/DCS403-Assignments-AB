//Find the Longest Word in a Sentence Find and print the longest word from a sentence. Expected Input: C++ programming is amazing Expected Output: Longest word: programming
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str, longestWord = "";
    cout << "Enter a sentence: ";
    getline(cin, str);
    int start = 0, end = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            end = i;
            if (end - start > longestWord.length()) {
                longestWord = str.substr(start, end - start);
            }
            start = i + 1;
        }
    }
    cout << "Longest word: " << longestWord << endl;
    return 0;
}