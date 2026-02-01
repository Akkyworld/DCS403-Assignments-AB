#include <iostream>
using namespace std;

int main() {
    int A[2][3], B[3][2], C[2][2] = {0};

    cout << "Enter 6 elements of Matrix A (2x3): ";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            cin >> A[i][j];

    cout << "Enter 6 elements of Matrix B (3x2): ";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 2; j++)
            cin >> B[i][j];

    // Multiplication
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            for (int k = 0; k < 3; k++)
                C[i][j] += A[i][k] * B[k][j];

    cout << "Result of A x B:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
