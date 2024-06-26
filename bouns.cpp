#include <iostream>

using namespace std;

class Employee {
private:
    string name;
    int salary;
    int bonus;

public:
   
    void input() {
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter salary: ";
        cin >> salary;
        cout << "Enter bonus: ";
        cin >> bonus;
    }

    
    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
        cout << "Bonus: $" << bonus << endl;
        cout << "Total Compensation: $" << (salary + bonus) << endl;
    }
};

int main() {
    Employee emp;

    emp.input();
    emp.display();

    return 0;
}

