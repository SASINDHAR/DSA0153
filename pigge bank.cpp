#include <iostream>

using namespace std;

class AddAmount {
private:
    int amount  ,n;

public:
    AddAmount() : amount(100) {}

    AddAmount(int add) : amount(50 + add) {}
    void displayAmount() {
        cout << "Final Amount in Piggie Bank: $" << amount << endl;
    }
};

int main() {
    AddAmount obj1;       
    AddAmount obj2(100); 
    obj1.displayAmount(); 
    obj2.displayAmount();

    return 0;
}

