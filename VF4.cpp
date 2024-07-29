     #include <iostream>
using namespace std;
class Vehicle {
public:
    virtual void drive() const = 0;
};
class Car : public Vehicle {
public:
    void drive() const override {
        cout << "Car is driving" << endl;
    }
};
class Truck : public Vehicle {
public:
    void drive() const override {
        cout << "Truck is driving" << endl;
    }
};
int main() {
    Car car;
    Truck truck;
    Vehicle* vehicle1 = &car;
    Vehicle* vehicle2 = &truck;
    vehicle1->drive();
    vehicle2->drive();
    return 0;
}
