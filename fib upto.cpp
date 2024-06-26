#include <iostream>

using namespace std;

class Series {
private:
    int num;

public:
  
    void input() {
        cout << "Enter a number to generate Fibonacci series up to: ";
        cin >> num;
    }

    
    void show() {
        if (num < 0) {
            cout << "Invalid input. Please enter a non-negative number." << endl;
            return;
        }

        int first = 0, second = 1, next;

        cout << "Fibonacci Series up to " << num << ":\n";

        if (num >= 1) {
            cout << first << " ";
        }
        if (num >= 2) {
            cout << second << " ";
        }

        for (int i = 3; i <= num; ++i) {
            next = first + second;
            cout << next << " ";
            first = second;
            second = next;
        }

        cout << endl;
    }
};

int main() {
    Series s;

  
    s.input();

    s.show();

    return 0;
}

