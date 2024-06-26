#include <iostream>
#include <stdexcept>
using namespace std;
unsigned long long factorial(int n) {
    if (n < 0) {
        throw invalid_argument("Factorial is not defined for negative integers.");
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}
unsigned long long factorial(char c) {
    int n = static_cast<int>(c);
    if (n < 0) {
        throw invalid_argument("Factorial is not defined for negative values.");
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    try {
        int intVal = 5;
        cout << "Factorial of " << intVal << " (int) is " << factorial(intVal) << endl;
        char charVal = '5'; 
        cout << "Factorial of '" << charVal << "' (char) with ASCII value " << static_cast<int>(charVal) << " is " << factorial(charVal) << endl;
    } catch (const invalid_argument &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}

