#include <iostream>
using namespace std;

class RightAngleTriangle {
public:
    RightAngleTriangle(int n) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    RightAngleTriangle triangle(5); 

    return 0;
}

