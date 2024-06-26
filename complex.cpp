#include <iostream>

using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
   
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    Complex operator+(const Complex& other) const {
        Complex result;
        result.real = this->real + other.real;
        result.imaginary = this->imaginary + other.imaginary;
        return result;
    }


    void display() const {
        cout << "(" << real << " + " << imaginary << "i)";
    }
};

int main() {
    Complex c1(3.0, 4.0); 
    Complex c2(1.5, 2.5); 

    Complex c3 = c1 + c2;

  
    cout << "Result of addition: ";
    c1.display();
    cout << " + ";
    c2.display();
    cout << " = ";
    c3.display();
    cout << endl;

    return 0;
}

