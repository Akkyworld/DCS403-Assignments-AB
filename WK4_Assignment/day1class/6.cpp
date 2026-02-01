//Write a function that finds the smallest element in an array of integers using the following header: double min(double array[], int size)
#include <iostream>
using namespace std;
double min(double array[], int size) {
    double min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}