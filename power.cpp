#include <iostream>

using namespace std;

int main() {
    double base;
    int exponent;
    double result = 1.0;

    // Input the base and exponent
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    // Calculate the power using a loop
    if (exponent > 0) {
        for (int i = 0; i < exponent; ++i) {
            result *= base;
        }
    } else if (exponent < 0) {
        for (int i = 0; i < -exponent; ++i) {
            result /= base;
        }
    } else {
        result = 1; // Any number raised to the power of 0 is 1
    }

    // Output the result
    cout << base << " raised to the power of " << exponent << " is " << result << endl;

    return 0;
}

