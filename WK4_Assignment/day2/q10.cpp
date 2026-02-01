#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    
    cout << "Enter 9 elements of 3x3 matrix: ";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> matrix[i][j];

    // Reverse each row
    for (int i = 0; i < 3; i++) {
        int start = 0, end = 2;
        while (start < end) {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }

    cout << "Matrix after reversing each row:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    return 0;
}
