#include <iostream>
using namespace std;

class MyClass {
private:
    int x, y;

public:
    MyClass(int a, int b);

    void displayValues();
};

MyClass::MyClass(int a, int b) {
    x = a;
    y = b;
}

void MyClass::displayValues() {
    cout << "x = " << x << ", y = " << y << endl;
}

int main() {
    MyClass obj(10, 20);

    obj.displayValues();

    return 0;
}

