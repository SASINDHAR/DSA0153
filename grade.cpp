#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int regNo;
    int marks[3];
    float average;
    char grade;

public:
    // Member function to input student details
    void input() {
        cout << "Enter student name: ";
        getline(cin, name);  // Using getline to handle spaces in name input
        cout << "Enter registration number: ";
        cin >> regNo;
        cout << "Enter marks for 3 subjects (mark1 mark2 mark3): ";
        cin >> marks[0] >> marks[1] >> marks[2];
    }

    // Member function to calculate average marks and assign grade
    void calculate() {
        average = (marks[0] + marks[1] + marks[2]) / 3.0;

        if (average > 90) {
            grade = 'S';
        } else if (average > 80) {
            grade = 'A';
        } else if (average > 70) {
            grade = 'C';
        } else if (average > 60) {
            grade = 'D';
        } else if (average > 50) {
            grade = 'E';
        } else {
            grade = 'F';
        }
    }

    // Member function to display student record
    void display() {
        cout << "\nStudent Name: " << name << endl;
        cout << "Registration Number: " << regNo << endl;
        cout << "Marks: " << marks[0] << ", " << marks[1] << ", " << marks[2] << endl;
        cout << "Average Marks: " << average << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student students[10];

    // Input details for each student
    for (int i = 0; i < 10; ++i) {
        cout << "\nEnter details for Student " << i + 1 << ":" << endl;
        cin.ignore(); // Clear the newline character left in the buffer
        students[i].input();
        students[i].calculate();
    }

    // Display records for each student
    cout << "\nStudent Records:" << endl;
    for (int i = 0; i < 10; ++i) {
        students[i].display();
    }

    return 0;
}

