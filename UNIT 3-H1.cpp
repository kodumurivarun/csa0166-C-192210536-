#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;

public:
    Student(string studentName = "Unknown") {
        name = studentName;
    }

    void display() {
        cout << "Student Name: " << name << endl;
    }
};

int main() {
    
    Student student1;             
    Student student2("Alice");    
    Student student3("Bob");      


    student1.display();
    student2.display();
    student3.display();

    return 0;
}

