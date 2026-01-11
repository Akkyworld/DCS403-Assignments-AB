// Write a C++ program that converts a temperature value from Celsius to Fahrenheit.The program should:
//Read a temperature value in Celsius
//Use constants for fixed conversion values
//Calculate the equivalent temperature in Fahrenheit
//Display the result
//This problem emphasizes:

//Constants in formulas
//Floating-point arithmetic
//Type conversion and precision

#include <iostream>
using namespace std;

int main() {
    double celsius;
    const double celsius_to_fahrenheit = 1.8;
    double fahrenheit;
    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = celsius * celsius_to_fahrenheit + 32;
    cout << "The temperature in Fahrenheit is: " << fahrenheit << endl;
    return 0;
}
