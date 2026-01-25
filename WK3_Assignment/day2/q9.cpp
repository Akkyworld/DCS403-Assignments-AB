/* Pascal’s Triangle
Problem: Print Pascal’s triangle up to N rows. */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            int binomial = 1;
            for (int k = 0; k < j; k++) {
                binomial *= (i - k);
                binomial /= (k + 1);
            }
            cout << binomial << " ";
        }
        cout << endl;
    }
    return 0;
}