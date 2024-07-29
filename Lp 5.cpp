#include <iostream>
class class_2;
class class_1 {
private:
    int value1;
public:
    class_1(int v1) : value1(v1) {}
    friend void swapValues(class_1&, class_2&);
    void display() const {
        std::cout << "class_1 value: " << value1 << std::endl;
    }
};
class class_2 {
private:
    int value2;
public:
    class_2(int v2) : value2(v2) {}
    friend void swapValues(class_1&, class_2&);
    void display() const {
        std::cout << "class_2 value: " << value2 << std::endl;
    }
};
void swapValues(class_1& obj1, class_2& obj2) {
    int temp = obj1.value1;
    obj1.value1 = obj2.value2;
    obj2.value2 = temp;
}
int main() {
    class_1 obj1(10);
    class_2 obj2(20);
    std::cout << "Before swapping:" << std::endl;
    obj1.display();
    obj2.display();
    swapValues(obj1, obj2);
    std::cout << "After swapping:" << std::endl;
    obj1.display();
    obj2.display();
    return 0;
}
