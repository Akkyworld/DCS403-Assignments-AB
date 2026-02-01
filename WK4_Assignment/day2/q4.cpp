#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    cout << "Enter 9 elements of 3x3 matrix: ";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> matrix[i][j];

    cout << "Largest elements in each row: ";
    for (int i = 0; i < 3; i++) {
        int maxVal = matrix[i][0];
        for (int j = 1; j < 3; j++) {
            if (matrix[i][j] > maxVal)
                maxVal = matrix[i][j];
        }
        cout << maxVal << " ";
    }
    cout << endl;

    return 0;
}
