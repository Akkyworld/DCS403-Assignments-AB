//Sum of First N Natural Numbers (Using for loop)
#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "The sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}