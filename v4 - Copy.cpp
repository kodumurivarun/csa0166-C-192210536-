#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    
    bool operator==(const Complex& other) const {
        return (real == other.real && imag == other.imag);
    }

    
    void print() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(3.5, 2.5);
    Complex c3(1.5, 4.5);

    std::cout << "Comparing c1 and c2: " << (c1 == c2 ? "Equal" : "Not Equal") << std::endl;
    std::cout << "Comparing c1 and c3: " << (c1 == c3 ? "Equal" : "Not Equal") << std::endl;

    return 0;
}

