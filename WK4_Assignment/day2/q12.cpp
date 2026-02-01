#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of NxN matrix: ";
    cin >> n;

    int matrix[n][n];
    cout << "Enter " << n*n << " elements: ";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    cout << "Boundary elements: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == n-1)
                cout << matrix[i][j] << " ";
        }
    }
    cout << endl;

    return 0;
}
