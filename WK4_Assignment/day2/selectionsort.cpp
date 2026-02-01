#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    int minIndex;
    for (int i = 0; i < n - 1; i++) {
        minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
        swap (arr[i], arr[minIndex]);
            }
        }
    }
}