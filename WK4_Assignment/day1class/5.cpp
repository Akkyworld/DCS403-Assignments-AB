#include <stdio.h>
double min(double array[], int size);

int main() {
    double numbers[10];
    printf("Enter ten numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &numbers[i]);
    }
    double smallest = min(numbers, 10);
    printf("The minimum value is: %.2f\n", smallest);
    return 0;
}
double min(double array[], int size) {
    double smallest = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }
    return smallest;
}
