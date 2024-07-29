#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;
public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}
    friend Complex add(Complex, Complex);
    void display() { cout << "Complex number: " << real << " + " << imag << "i" << endl; }
};

Complex add(Complex c1, Complex c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(3.5, 2.5), c2(1.5, 4.5);
    Complex c3 = add(c1, c2);
    c3.display(); 
    return 0;
}
