#include <iostream>
using namespace std;
const double PI = 3.141592653589793;
class Shape {
public:
    virtual double area() const = 0;
    virtual double volume() const = 0;
};
class Sphere : public Shape {
private:
    double radius;
public:
    Sphere(double r) : radius(r) {}
    double area() const override {
        return 4 * PI * radius * radius;
    }
    double volume() const override {
        return (4.0 / 3.0) * PI * radius * radius * radius;
    }
};
class Cylinder : public Shape {
private:
    double radius, height;
public:
    Cylinder(double r, double h) : radius(r), height(h) {}
    double area() const override {
        return 2 * PI * radius * (radius + height);
    }
    double volume() const override {
        return PI * radius * radius * height;
    }
};
int main() {
    Sphere sphere(5.0);
    Cylinder cylinder(3.0, 7.0);
    cout << "Sphere:" << endl;
    cout << "Surface Area: " << sphere.area() << endl;
    cout << "Volume: " << sphere.volume() << endl;
    cout << "\nCylinder:" << endl;
    cout << "Surface Area: " << cylinder.area() << endl;
    cout << "Volume: " << cylinder.volume() << endl;
    return 0;
}
