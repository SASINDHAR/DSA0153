#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;

public:
  
    Student(const string& n = "Unknown") : name(n) {}

    
    void displayName() {
        cout << "Student's Name: " << name << endl;
    }
};

int main() {
   
    Student student1;         
    Student student2("Alice");
    Student student3("Bob");

    student1.displayName();   
    student2.displayName();  
    student3.displayName();  

    return 0;
}

