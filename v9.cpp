#include <iostream>

class Number {
private:
    int value;

public:

    Number(int v = 0) : value(v) {}

    
    Number& operator+=(const Number& other) {
        value += other.value;
        return *this;
    }

    
    void print() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    Number num1(5);
    Number num2(10);

    std::cout << "Before addition:" << std::endl;
    num1.print();
    num2.print();

    
    num1 += num2;

    std::cout << "After addition using += operator:" << std::endl;
    num1.print();

    return 0;
}

