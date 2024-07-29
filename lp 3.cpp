#include <iostream>
#include <string>
class Manager {
private:
    std::string name;
    int age;
    std::string department;
public:
    Manager(std::string n = "", int a = 0, std::string d = "") : name(n), age(a), department(d) {}
    void setDetails(std::string n, int a, std::string d) {
        name = n;
        age = a;
        department = d;
    }
    void displayDetails() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Department: " << department << std::endl;
    }
};
int main() {
    int numManagers;
    std::cout << "Enter the number of managers: ";
    std::cin >> numManagers;
    Manager* managers = new Manager[numManagers];
    for (int i = 0; i < numManagers; ++i) {
        std::string name;
        int age;
        std::string department;
        std::cout << "Enter details for manager " << i + 1 << ":\n";
        std::cout << "Name: ";
        std::cin.ignore();
        std::getline(std::cin, name);
        std::cout << "Age: ";
        std::cin >> age;
        std::cout << "Department: ";
        std::cin.ignore();
        std::getline(std::cin, department);
        managers[i].setDetails(name, age, department);
    }
    std::cout << "\nList of Managers:\n";
    for (int i = 0; i < numManagers; ++i) {
        managers[i].displayDetails();
    }
    delete[] managers;
    return 0;
}
