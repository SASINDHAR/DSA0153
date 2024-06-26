#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    int fibN, fib0 = 0, fib1 = 1;

    
    if (N < 0) {
        cout << "N should be a non-negative integer." << endl;
    } else if (N == 0) {
        cout << "Fibonacci number F(0) is 0." << endl;
    } else if (N == 1) {
        cout << "Fibonacci number F(1) is 1." << endl;
    } else {
      
        for (int i = 2; i <= N; ++i) {
            fibN = fib0 + fib1;
            fib0 = fib1;
            fib1 = fibN;
        }
        cout << "Fibonacci number F(" << N << ") is " << fibN << "." << endl;
    }

    return 0;
}

