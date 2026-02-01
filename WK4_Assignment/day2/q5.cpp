#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    cout << "Enter 9 elements of 3x3 matrix: ";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> matrix[i][j];

    cout << "Transpose:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << matrix[j][i] << " ";
        cout << endl;
    }

    return 0;
}
