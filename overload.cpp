#include <iostream>

using namespace std;

class Add {
private:
    int num1;
    int num2;

public:
    Add(int n1, int n2) : num1(n1), num2(n2) {}

   
    Add operator+(const Add& other) {
        int sum_num1 = num1 + other.num1;
        int sum_num2 = num2 + other.num2;
        return Add(sum_num1, sum_num2);
    }
    void display() {
        cout << "Sum: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
    }
};

int main() {
    Add obj1(10, 20);
    Add obj2(30, 40);
    Add obj3 = obj1 + obj2;
    obj3.display();

    return 0;
}

