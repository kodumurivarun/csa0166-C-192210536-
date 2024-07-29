#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    float area(float radius) {
        return 3.14 * radius * radius;
    }

    float area(float length, float breadth) {
        return length * breadth;
    }
    float area(float base, float height, float side) {
        float s = (base + height + side) / 2;
        return sqrt(s * (s - base) * (s - height) * (s - side));
    }
};

int main() {
    Shape shape;

    float circleRadius = 5;
    cout << "Area of circle with radius " << circleRadius << " is: " << shape.area(circleRadius) << endl;

    float rectangleLength = 4, rectangleBreadth = 6;
    cout << "Area of rectangle with length " << rectangleLength << " and breadth " << rectangleBreadth << " is: "
         << shape.area(rectangleLength, rectangleBreadth) << endl;
    float triangleBase = 3, triangleHeight = 4, triangleSide = 5;
    cout << "Area of triangle with base " << triangleBase << ", height " << triangleHeight << " and side " << triangleSide
         << " is: " << shape.area(triangleBase, triangleHeight, triangleSide) << endl;

    return 0;
}

