#include <iostream>
#include <string>
class Employee {
public:
    Employee(std::string name, int id, double salary)
        : name(name), id(id), salary(salary) {}
    void setName(std::string name) { this->name = name; }
    std::string getName() const { return name; }
    void setId(int id) { this->id = id; }
    int getId() const { return id; }
    void setSalary(double salary) { this->salary = salary; }
    double getSalary() const { return salary; }
    void display() const {
        std::cout << "Name: " << name << ", ID: " << id << ", Salary: $" << salary << std::endl;
    }
protected:
    std::string name;
    int id;
    double salary;
};
class Manager : public Employee {
public:
    Manager(std::string name, int id, double salary, std::string department, double bonus)
        : Employee(name, id, salary), department(department), bonus(bonus) {}
    void setDepartment(std::string department) { this->department = department; }
    std::string getDepartment() const { return department; }
    void setBonus(double bonus) { this->bonus = bonus; }
    double getBonus() const { return bonus; }
    void display() const {
        Employee::display();
        std::cout << "Department: " << department << ", Bonus: $" << bonus << std::endl;
    }
private:
    std::string department;
    double bonus;
};
class Engineer : public Employee {
public:
    Engineer(std::string name, int id, double salary, std::string specialty, int hours)
        : Employee(name, id, salary), specialty(specialty), hours(hours) {}
    void setSpecialty(std::string specialty) { this->specialty = specialty; }
    std::string getSpecialty() const { return specialty; }
    void setHours(int hours) { this->hours = hours; }
    int getHours() const { return hours; }
    void display() const {
        Employee::display();
        std::cout << "Specialty: " << specialty << ", Hours: " << hours << std::endl;
    }
private:
    std::string specialty;
    int hours;
};
int main() {
    Manager mgr("Alice Johnson", 101, 75000.00, "Sales", 5000.00);
    Engineer eng("Bob Smith", 102, 60000.00, "Software Development", 40);
    std::cout << "Manager Information:" << std::endl;
    mgr.display();
    std::cout << "\nEngineer Information:" << std::endl;
    eng.display();
    return 0;
}
