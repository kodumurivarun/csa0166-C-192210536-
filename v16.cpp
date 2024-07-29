#include <iostream>

unsigned long long factorial(int n) {
    if (n < 0) {
        std::cerr << "Error: Factorial of negative numbers is not defined." << std::endl;
        return 0; 
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}


unsigned long long factorial(double n) {
    int intN = static_cast<int>(n);
    if (n < 0 || n != intN) {
        std::cerr << "Error: Factorial of negative numbers or non-integer values is not defined." << std::endl;
        return 0; 
    }
    return factorial(intN); 
}

int main() {
    int intNum = 5;
    double doubleNum = 5.0;

    
    unsigned long long intFact = factorial(intNum);
    std::cout << "Factorial of " << intNum << " (integer): " << intFact << std::endl;

    
    unsigned long long doubleFact = factorial(doubleNum);
    std::cout << "Factorial of " << doubleNum << " (floating-point): " << doubleFact << std::endl;

    return 0;
}

