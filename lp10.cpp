#include <iostream>
class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
    Complex operator*(const Complex& other) const {
        return Complex(
            real * other.real - imag * other.imag, 
            real * other.imag + imag * other.real
        );
    }
    void display() const {
        if (imag >= 0)
            std::cout << real << " + " << imag << "i" << std::endl;
        else
            std::cout << real << " - " << -imag << "i" << std::endl;
    }
};
int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.5, -1.5);
    std::cout << "Complex number 1: ";
    c1.display();
    std::cout << "Complex number 2: ";
    c2.display();
    Complex sum = c1 + c2;
    std::cout << "Sum of complex numbers: ";
    sum.display();
    Complex product = c1 * c2;
    std::cout << "Product of complex numbers: ";
    product.display();
    return 0;
}
