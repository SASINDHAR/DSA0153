#include <iostream>
#include <stdexcept> // for standard exception classes

using namespace std;

// Function to divide two numbers with exception handling
double divide(double numerator, double denominator) {
    if (denominator == 0) {
        throw runtime_error("Division by zero exception");
    }
    return numerator / denominator;
}

int main() {
    double num1, num2;

    try {
        // Prompt user to enter the numerator
        cout << "Enter the numerator: ";
        cin >> num1;
        if(cin.fail()) {
            throw invalid_argument("Invalid input for numerator");
        }

        // Prompt user to enter the denominator
        cout << "Enter the denominator: ";
        cin >> num2;
        if(cin.fail()) {
            throw invalid_argument("Invalid input for denominator");
        }

        // Perform division
        double result = divide(num1, num2);
        cout << "Result: " << result << endl;
    } 
    catch (const runtime_error& e) {
        cout << "Runtime error: " << e.what() << endl;
    } 
    catch (const invalid_argument& e) {
        cout << "Invalid argument: " << e.what() << endl;
    } 
    catch (...) {
        cout << "An unexpected error occurred" << endl;
    }

    return 0;
}

