#include <iostream>
class MyClass {
private:
    int* data;
public:
    MyClass(int value) {
        data = new int(value);
        std::cout << "Memory allocated for data and initialized with value: " << value << std::endl;
    }
    ~MyClass() {
        delete data;
        std::cout << "Memory deallocated for data." << std::endl;
    }
    void display() const {
        std::cout << "Data: " << *data << std::endl;
    }
};
int main() {
    MyClass* obj = new MyClass(42);
    obj->display();
    delete obj;
    return 0;
}
