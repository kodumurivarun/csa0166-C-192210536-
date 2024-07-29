#include <iostream>
using namespace std;

class NumberPattern {
private:
    int rows;

public:
    NumberPattern(int n = 5) : rows(n) {}
    void printPattern() {
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    NumberPattern pattern;
    pattern.printPattern();

    return 0;
}

