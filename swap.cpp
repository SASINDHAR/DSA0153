#include <iostream>

using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue - a: " << a << ", b: " << b << endl;
}


void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByReference - a: " << a << ", b: " << b << endl;
}

int main() {
    int x = 5, y = 10;

    cout << "Before swapping - x: " << x << ", y: " << y << endl;

    // Call by value
    swapByValue(x, y);
    cout << "After swapByValue - x: " << x << ", y: " << y << endl;

    // Call by reference
    swapByReference(x, y);
    cout << "After swapByReference - x: " << x << ", y: " << y << endl;

    return 0;
}

