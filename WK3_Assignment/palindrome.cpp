//detect palindrome using loop only for numbers
#include <iostream>
using namespace std;
int main() {
    int n, rev = 0, rem;
    cout << "Enter a number: ";
    cin >> n;
    int temp = n;
    while (n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (temp == rev) \{
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }
    return 0;
}