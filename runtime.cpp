#include <iostream>
#include <stdexcept>

using namespace std;

void handleException(int errorType) {
    if (errorType == 1) {
        throw runtime_error("Runtime error occurred");
    } else if (errorType == 2) {
        throw out_of_range("Out of range error occurred");
    } else if (errorType == 3) {
        throw invalid_argument("Invalid argument error occurred");
    } else {
        throw "Unknown error occurred";
    }
}

int main() {
    int errorType;

    cout << "Enter error type (1: runtime_error, 2: out_of_range, 3: invalid_argument, other: unknown): ";
    cin >> errorType;

    try {
        handleException(errorType);
    } catch (const runtime_error& e) {
        cout << "Caught a runtime_error: " << e.what() << endl;
    } catch (const out_of_range& e) {
        cout << "Caught an out_of_range error: " << e.what() << endl;
    } catch (const invalid_argument& e) {
        cout << "Caught an invalid_argument error: " << e.what() << endl;
    } catch (const char* msg) {
        cout << "Caught an unknown error: " << msg << endl;
    } catch (...) {
        cout << "Caught an unspecified exception" << endl;
    }

    return 0;
}

