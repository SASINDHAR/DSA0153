#include <iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double breadth;

public:
    // Constructor 1: No parameters (default constructor)
    Rectangle() : length(0), breadth(0) {}

    // Constructor 2: Two parameters for length and breadth
    Rectangle(double len, double br) : length(len), breadth(br) {}

    // Constructor 3: One parameter (sets both length and breadth to the same value)
    Rectangle(double side) : length(side), breadth(side) {}

    // Function to calculate and return area of the rectangle
    double area() const {
        return length * breadth;
    }
};

int main() {
    // Creating objects using different constructors
    Rectangle rect1;           // Default constructor (length = 0, breadth = 0)
    Rectangle rect2(5.0, 3.0); // Constructor with two parameters
    Rectangle rect3(4.0);      // Constructor with one parameter (square)

    // Displaying areas of the rectangles
    cout << "Area of Rectangle 1: " << rect1.area() << " square units" << endl;
    cout << "Area of Rectangle 2: " << rect2.area() << " square units" << endl;
    cout << "Area of Rectangle 3: " << rect3.area() << " square units" << endl;

    return 0;
}

