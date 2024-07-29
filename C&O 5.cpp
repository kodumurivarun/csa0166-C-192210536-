#include <iostream>
using namespace std;

class class_2; // Forward declaration

class class_1 {
private:
    int value1;
public:
    class_1(int v) : value1(v) {}
    friend void swap(class_1&, class_2&);
    void display() { cout << "class_1 value: " << value1 << endl; }
};

class class_2 {
private:
    int value2;
public:
    class_2(int v) : value2(v) {}
    friend void swap(class_1&, class_2&);
    void display() { cout << "class_2 value: " << value2 << endl; }
};

void swap(class_1& c1, class_2& c2) {
    int temp = c1.value1;
    c1.value1 = c2.value2;
    c2.value2 = temp;
}

int main() {
    class_1 c1(100);
    class_2 c2(200);
    c1.display(); 
    c2.display(); 
    swap(c1, c2);
    c1.display(); 
    c2.display(); 
    return 0;
}
