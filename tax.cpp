#include <iostream>

using namespace std;

class Employee {
private:
    double taxableIncome;
    double tax;

public:
    
    Employee(double income) : taxableIncome(income), tax(0) {}

 
    void calculateTax() {
        if (taxableIncome <= 60000) {
            tax = 0;
        } else if (taxableIncome > 60000 && taxableIncome <= 150000) {
            tax = taxableIncome * 0.05;
        } else if (taxableIncome > 150000 && taxableIncome <= 500000) {
            tax = taxableIncome * 0.1;
        } else {
            tax = taxableIncome * 0.15;
        }
    }

    
    void display() {
        cout << "Taxable Income: $" << taxableIncome << endl;
        cout << "Income Tax: $" << tax << endl;
    }
};

int main() {
    double income;
    cout << "Enter taxable income: $";
    cin >> income;   
    Employee emp(income);  
    emp.calculateTax();
    emp.display();

    return 0;
}

