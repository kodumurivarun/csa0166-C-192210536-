#include <iostream>

class MyClass {
private:
    static int count; // 
    int id; 

public:
    MyClass() {
        count++; 
        id = count; 
    }

    
    static void showCount() {
        std::cout << "Number of objects created: " << count << std::endl;
    }

    
    ~MyClass() {
        count--;
    }
};


int MyClass::count = 0;

int main() {
    
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    
    MyClass::showCount();

    
    MyClass obj4;

    
    MyClass::showCount();

    return 0;
}

