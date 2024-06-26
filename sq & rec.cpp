#include <iostream>

using namespace std;

class AreaCalculator {
public:
    // Function to calculate and print area of rectangle
    void calculateArea(double length, double breadth) {
        double area = length * breadth;
        cout << "Area of Rectangle: " << area << " square units" << endl;
    }

    // Function overloading to calculate and print area of square
    void calculateArea(double side) {
        double area = side * side;
        cout << "Area of Square: " << area << " square units" << endl;
    }
};

int main() {
    AreaCalculator calc;

    // Calculate and display area of rectangle (length = 5.0, breadth = 3.0)
    calc.calculateArea(5.0, 3.0);

    // Calculate and display area of square (side = 4.0)
    calc.calculateArea(4.0);

    return 0;
}

