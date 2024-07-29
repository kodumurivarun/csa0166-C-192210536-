#include <iostream>
using namespace std;

class AreaCalculator {
public:

    void calculateArea(double length, double breadth) {
        double area = length * breadth;
        cout << "Area of Rectangle: " << area << " square units" << endl;
    }

    void calculateArea(double side) {
        double area = side * side;
        cout << "Area of Square: " << area << " square units" << endl;
    }
};

int main() {
    AreaCalculator calc;

    calc.calculateArea(5.0, 10.0);


    calc.calculateArea(7.5);

    return 0;
}

