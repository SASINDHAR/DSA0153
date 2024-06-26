#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double number;

    cout << "Enter a floating-point number: ";
    cin >> number;

   
    double floor_diff = abs(floor(number) - number);
    double ceil_diff = abs(ceil(number) - number);
   
    int rounded_number;
    if (floor_diff < ceil_diff) {
        rounded_number = floor(number);
    } else if (floor_diff > ceil_diff) {
        rounded_number = ceil(number);
    } else {
        
        rounded_number = ceil(number);
    }

    cout << "The nearest integer to " << number << " is " << rounded_number << endl;

    return 0;
}

