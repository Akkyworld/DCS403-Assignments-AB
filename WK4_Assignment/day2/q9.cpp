#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    bool symmetric = true;

    cout << "Enter 9 elements of 3x3 matrix: ";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> matrix[i][j];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (matrix[i][j] != matrix[j][i])
                symmetric = false;

    if (symmetric)
        cout << "Matrix is symmetric.\n";
    else
        cout << "Matrix is not symmetric.\n";

    return 0;
}
