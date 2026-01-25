//Print a Multiplication Table (1–10) (Using Nested Loops)Problem: Print multiplication tables for numbers 1 through 10.

#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}