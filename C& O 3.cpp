#include <iostream>
using namespace std;

class Manager {
public:
    string name;
    int age;
    Manager(string n, int a) : name(n), age(a) {}
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Manager managers[] = {
        Manager("Alice", 45),
        Manager("Bob", 50),
        Manager("Charlie", 39)
    };

    for (int i = 0; i < 3; i++) {
        managers[i].display();
    }

    return 0;
}
