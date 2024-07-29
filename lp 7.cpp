#include <iostream>
class Sample {
private:
    int data;
public:
    Sample(int d) : data(d) {}
    Sample(const Sample &obj) : data(obj.data) {
        std::cout << "Copy constructor called." << std::endl;
    }
    void display() const {
        std::cout << "Data: " << data << std::endl;
    }
};
int main() {
    Sample obj1(42);
    std::cout << "Original object:" << std::endl;
    obj1.display();
    Sample obj2(obj1);
    std::cout << "Copied object:" << std::endl;
    obj2.display();
    return 0;
}
