#include <iostream>


int max(int a, int b) {
    return (a > b) ? a : b;
}


double max(double a, double b) {
    return (a > b) ? a : b;
}


char max(char a, char b) {
    return (a > b) ? a : b;
}

int main() {
    int intMax;
    double doubleMax;
    char charMax;

    
    intMax = max(5, 3);
    std::cout << "Maximum of integers: " << intMax << std::endl;
    doubleMax = max(5.5, 3.3);
    std::cout << "Maximum of floating-point numbers: " << doubleMax << std::endl;

    
    charMax = max('a', 'b');
    std::cout << "Maximum of characters: " << charMax << std::endl;

    return 0;
}

