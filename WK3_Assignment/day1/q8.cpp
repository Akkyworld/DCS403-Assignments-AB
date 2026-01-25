//Floyd’s Triangle Pattern (Nested for loops) Problem: Print Floyd’s triangle up to N rows. Example for N=4:

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}