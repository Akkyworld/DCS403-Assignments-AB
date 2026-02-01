#include <iostream>
using namespace std;

double sumArray(double array[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += array[i];
    }
    return total;
}

int main() {
    double numbers[10];

    cout << "Enter ten numbers:\n";
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    double result = sumArray(numbers, 10);
    cout << "The sum is: " << result << endl;

    return 0;
}
