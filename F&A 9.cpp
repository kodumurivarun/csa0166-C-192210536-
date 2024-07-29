#include <iostream>


double celsiusToFahrenheit(double celsius) {
    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    return fahrenheit;
}

int main() {
    double celsius;
    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> celsius;

    
    double fahrenheit = celsiusToFahrenheit(celsius);

    
    std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;

    return 0;
}

