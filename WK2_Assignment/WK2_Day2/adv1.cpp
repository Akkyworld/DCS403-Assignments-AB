//Mathematical Functions 1. Quadratic Equation Roots Write a program to calculate the roots of a quadratic equation [ ax^2 + bx + c = 0 ] Formula Used: [ D = b^2 - 4ac ] [ x_1 = \frac{-b + \sqrt{D}}{2a}, \quad x_2 = \frac{-b - \sqrt{D}}{2a} ] Hint: Use sqrt() and conditional statements for real, equal, or imaginary roots. Expected Input: a = 1, b = -3, c = 2 Expected Output: Roots are real and distinct: 2 and 1
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a, b, c;
    cout << "Enter the coefficients a, b, and c: ";
    cin >> a >> b >> c;
    double D = b * b - 4 * a * c;
    if (D > 0){
        double root1 = (-b + sqrt(D)) / (2 * a);
        double root2 = (-b - sqrt(D)) / (2 * a);
        cout << "Roots are real and distinct: " << root1 << " and " << root2 << endl;
    }else if (D == 0){
        double root = -b / (2 * a);
        cout << "Root is real and equal: " << root << endl;
    }else{
        cout << "Roots are imaginary" << endl;
    }
    return 0;
}