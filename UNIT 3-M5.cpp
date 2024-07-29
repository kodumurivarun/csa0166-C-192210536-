#include <iostream>
using namespace std;

class DecimalToBinary {
public:
	
    DecimalToBinary(int decimal) {
        int binary = 0, base = 1;

        while (decimal > 0) {
            int remainder = decimal % 2;
            binary += remainder * base;
            decimal /= 2;
            base *= 10;
        }

        cout << "Binary equivalent: " << binary << endl;
    }
};

int main() {
    int decimal;

    cout << "Enter a decimal number: ";
    cin >> decimal;
    
    DecimalToBinary converter(decimal);

    return 0;
}

