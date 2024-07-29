#include <iostream>

class MyClass {
private:
    static int count; 

public:
    
    MyClass() {
        count++;
    }

    
    static void showCount() {
        std::cout << "Number of objects created: " << count << std::endl;
    }
};


int MyClass::count = 0;

int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    
    MyClass::showCount();

    return 0;
}

