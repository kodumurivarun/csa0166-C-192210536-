#include <iostream>
#include <cmath>

double calculateCircleArea(double radius) {
    
    double area = M_PI * radius * radius;
    return area;
}

int main() {
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;


    if (radius < 0) {
        std::cerr << "Radius cannot be negative." << std::endl;
        return 1; 
    }

    
    double area = calculateCircleArea(radius);
    std::cout << "Area of the circle with radius " << radius << " is: " << area << std::endl;

    return 0;
}

