//Write a program to calculate the sine, cosine, and tangent of an angle in radians. Hint: Use sin(), cos(), and tan() functions from <cmath>Expected Output:sin(45°) = 0.707cos(45°) = 0.707 tan(45°) = 1

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double angleDeg;

    cout << "Enter angle in degrees: ";
    cin >> angleDeg;

    double angleRad = angleDeg * M_PI / 180;

    cout << "sin(" << angleDeg << "°) = " << sin(angleRad) << endl;
    cout << "cos(" << angleDeg << "°) = " << cos(angleRad) << endl;
    cout << "tan(" << angleDeg << "°) = " << tan(angleRad) << endl;

    return 0;
}
