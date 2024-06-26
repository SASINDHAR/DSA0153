#include <iostream>

using namespace std;

void findGreatest(int* num1, int* num2, int* num3) {
    if (*num1 > *num2 && *num1 > *num3) {
        cout << "The greatest number is: " << *num1 << endl;
    } else if (*num2 > *num1 && *num2 > *num3) {
        cout << "The greatest number is: " << *num2 << endl;
    } else {
        cout << "The greatest number is: " << *num3 << endl;
    }
}

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Pointers to the numbers
    int* ptr1 = &a;
    int* ptr2 = &b;
    int* ptr3 = &c;

    // Find and display the greatest number
    findGreatest(ptr1, ptr2, ptr3);

    return 0;
}

