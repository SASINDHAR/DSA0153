#include <iostream>

using namespace std;

int main() {
    int n = 5;  

    for (int i = 1; i <= n; ++i) {
       
        for (int j = 0; j < i; ++j) {
            cout << i + j;
        }
      
        for (int j = i - 2; j >= 0; --j) {
            cout << i + j;
        }
        cout << endl;
    }

    return 0;
}

