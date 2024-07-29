#include <iostream>
#include <cmath> // 


double calculateArea(double sideLength) {
    return sideLength * sideLength;
}
double calculateArea(double length, double width) {
    return length * width;
}


double calculateArea(double radius) {
    return M_PI * pow(radius, 2);
}

int main() {
    double side = 5.0;
    double length = 6.0;
    double width = 4.0;
    double radius = 3.0;

    
    double areaSquare = calculateArea(side);
    std::cout << "Area of square with side " << side << " units: " << areaSquare << " square units" << std::endl;

    double areaRectangle = calculateArea(length, width);
    std::cout << "Area of rectangle with length " << length << " units and width " << width << " units: " << areaRectangle << " square units" << std::endl;

    
    double areaCircle = calculateArea(radius);
    std::cout << "Area of circle with radius " << radius << " units: " << areaCircle << " square units" << std::endl;

    return 0;
}

