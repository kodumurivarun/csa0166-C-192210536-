 #include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    
    void print() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex c1(4.5, 3.0);
    Complex c2(2.0, 1.5);

    Complex result = c1 - c2;

    std::cout << "c1 = ";
    c1.print();
    std::cout << "c2 = ";
    c2.print();
    std::cout << "Result of c1 - c2 = ";
    result.print();

    return 0;
}

