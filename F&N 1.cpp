#include <iostream>

unsigned long long factorial(int n) {
    if (n < 0) {
        std::cerr << "Factorial is not defined for negative numbers." << std::endl;
        return 0; 
    }
    
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
    	
        result *= i;
    }
    
    return result;
}

int main() {
    int number;
    std::cout << "Enter a number to compute factorial: ";
    std::cin >> number;

    unsigned long long fact = factorial(number);
    std::cout << "Factorial of " << number << " is: " << fact << std::endl;

    return 0;
}

