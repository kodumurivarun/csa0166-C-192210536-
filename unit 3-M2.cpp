#include <iostream>
using namespace std;

class Shape {
public:
    
    double volume(double side) {
        return side * side * side;
    }

    
    double volume(double radius, double height) {
        return 3.14 * radius * radius * height;
    }
};

int main() {
    Shape shape;

    
    double cubeSide = 5;
    cout << "Volume of cube with side " << cubeSide << " is: " << shape.volume(cubeSide) << endl;

    
    double cylinderRadius = 3, cylinderHeight = 8;
    cout << "Volume of cylinder with radius " << cylinderRadius << " and height " << cylinderHeight
         << " is: " << shape.volume(cylinderRadius, cylinderHeight) << endl;

    return 0;
}

