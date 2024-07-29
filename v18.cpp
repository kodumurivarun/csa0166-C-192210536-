#include <iostream>
#include <cmath> 


long long power(int base, int exponent) {
    return static_cast<long long>(std::pow(base, exponent));
}


double power(double base, double exponent) {
    return std::pow(base, exponent);
}

int main() {
    int intBase = 2;
    int intExponent = 5;
    double doubleBase = 2.5;
    double doubleExponent = 3.0;

    
    long long intResult = power(intBase, intExponent);
    std::cout << "Power of " << intBase << " raised to " << intExponent << " (integer): " << intResult << std::endl;

    
    double doubleResult = power(doubleBase, doubleExponent);
    std::cout << "Power of " << doubleBase << " raised to " << doubleExponent << " (floating-point): " << doubleResult << std::endl;

    return 0;
}

