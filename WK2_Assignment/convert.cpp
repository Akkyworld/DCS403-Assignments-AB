// convert hexadecimal to decimal equivalent, NEED TO HANDLE 0-9, A-F, a-f, 'A' ASCII = 65₁₀ = 41₁₆

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    char hex;
    int decimal;

    cout << "Enter a hexadecimal digit (0-9, A-F): ";
    cin >> hex;

    if (hex >= '0' && hex <= '9') {
        decimal = hex - '0';
    } else if (hex >= 'A' && hex <= 'F') {
        decimal = hex - 'A' + 10;
    } else if (hex >= 'a' && hex <= 'f') {
        decimal = hex - 'a' + 10;
    } else {
        cout << "Invalid input. Please enter a valid hexadecimal digit." << endl;
        return 1;
    }

    cout << "The decimal equivalent of " << hex << " is: " << decimal << endl;

    return 0;
}