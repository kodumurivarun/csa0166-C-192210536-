#include <iostream>


int add(int a, int b) {
    return a + b;
}


double add(double a, double b) {
    return a + b;
}

int main() {
    int intResult;
    double doubleResult;

    
    intResult = add(5, 3);
    std::cout << "Sum of integers: " << intResult << std::endl;


    doubleResult = add(5.5, 3.3);
    std::cout << "Sum of floating-point numbers: " << doubleResult << std::endl;

    return 0;
}

