//Print Multiplication Table (Using do-while loop) Problem: Input a number and print its multiplication table up to 10.
#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int i = 1;
    do {
        cout << num << " * " << i << " = " << num * i << endl;
        i++;
    } while (i <= 10);
    return 0;
}