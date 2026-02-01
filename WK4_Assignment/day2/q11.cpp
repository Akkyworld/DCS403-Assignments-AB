#include <iostream>
using namespace std;

int main() {
    int matrix[3][2];

    cout << "Enter 6 elements of 3x2 matrix: ";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 2; j++)
            cin >> matrix[i][j];

    // Reverse each column
    for (int j = 0; j < 2; j++) {
        int top = 0, bottom = 2;
        while (top < bottom) {
            swap(matrix[top][j], matrix[bottom][j]);
            top++;
            bottom--;
        }
    }

    cout << "Matrix after reversing each column:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    return 0;
}
