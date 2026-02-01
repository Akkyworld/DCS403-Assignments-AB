//Write a test program that prompts the user to enter ten numbers, invokes the function in #3, and displays the minimum value.
#include <iostream>
using namespace std;
int main() {
    int num[10], min;
    for (int i = 0; i < 10; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num[i];
    }
    min = num[0];
    for (int i = 1; i < 10; i++) {
        if (num[i] < min) {
            min = num[i];
        }
    }
    cout << "The minimum value is: " << min << endl;
    return 0;
}