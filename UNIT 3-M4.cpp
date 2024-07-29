#include <iostream>
using namespace std;

class FloydTriangle {
private:
    int rows;

public:
    FloydTriangle(int n) : rows(n) {}

    ~FloydTriangle() {}

    void printTriangle() {
        int number = 1;
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << number << " ";
                ++number;
            }
            cout << endl;
        }
    }
};

int main() {
    int n;

    cout << "Enter the number of rows for Floyd's Triangle: ";
    cin >> n;

    FloydTriangle triangle(n);

    
    triangle.printTriangle();

    return 0;
}

