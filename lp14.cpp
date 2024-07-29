#include <iostream>
using namespace std;

class circle {
private:
    int radius;
    float x, y;

public:
    circle() : radius(0), x(0.0), y(0.0) {}

    circle(int rr, float xx, float yy) : radius(rr), x(xx), y(yy) {}

    circle& operator=(const circle& c) {
        cout << endl << "Assignment operator invoked";
        if (this != &c) { // Check for self-assignment
            radius = c.radius;
            x = c.x;
            y = c.y;
        }
        return *this;
    }

    circle(const circle& c) {
        cout << endl << "Copy constructor invoked";
        radius = c.radius;
        x = c.x;
        y = c.y;
    }

    void showdata() {
        cout << endl << "Radius = " << radius;
        cout << endl << "X-Coordinate = " << x;
        cout << endl << "Y-Coordinate = " << y;
    }
};

int main() {
    circle c1(10, 2.5, 2.5);
    circle c2, c4;
    c4 = c2 = c1;
    circle c3 = c1;

    cout << endl << "Data for c1:";
    c1.showdata();

    cout << endl << "\nData for c2:";
    c2.showdata();

    cout << endl << "\nData for c3:";
    c3.showdata();

    cout << endl << "\nData for c4:";
    c4.showdata();

    return 0;
}

