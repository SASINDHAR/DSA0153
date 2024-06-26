#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int id;
    double salary;

public:
    Employee(const string &name, int id, double salary) : name(name), id(id), salary(salary) {
        cout << "Employee created: " << name << endl;
    }
    ~Employee() {
        cout << "Employee destroyed: " << name << endl;
    }
    void display() const {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp1("John Doe", 101, 50000.0);
    emp1.display();
    Employee emp2("Jane Smith", 102, 60000.0);
    emp2.display();

    return 0;
}
