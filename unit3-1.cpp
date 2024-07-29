#include <iostream>
using namespace std;

class CubeCalculator {
private:
    int size;

public:
    CubeCalculator(int n) : size(n) {} 

    void displayCubes() {
        cout << "Cubes of numbers from 1 to " << size << ":" << endl;
        for (int i = 1; i <= size; ++i) {
            cout << "Cube of " << i << " is " << (i * i * i) << endl;
        }
    }

    ~CubeCalculator() {} 
};

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    CubeCalculator calculator(num);

    calculator.displayCubes();

    return 0;
}

