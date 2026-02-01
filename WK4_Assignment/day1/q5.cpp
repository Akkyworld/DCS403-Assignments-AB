#include <iostream>
using namespace std;
 int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // safer than (low + high)/2

        if (arr[mid] == target) {
            return mid; // element found, return index
        } else if (arr[mid] < target) {
            low = mid + 1; // search in the right half
         }else {
            high = mid - 1; // search in the left half
         }
     }
     return -1; // element not found
 }

int main() {
    int n;
    cout << "Enter number of elements in the sorted array: ";
     cin >> n;
     int arr[n];
     cout << "Enter " << n << " elements in sorted order: ";
     for (int i = 0; i < n; i++) {
         cin >> arr[i];
     }
     int target;
     cout << "Enter element to search: ";
     cin >> target;
     int result = binarySearch(arr, n, target);
     if (result != -1) {
        cout << "Element found at index: " << result << endl;
     } else {
        cout << "Element not found in the array." << endl;
     }
     return 0;
 }
