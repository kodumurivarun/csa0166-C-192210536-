#include <iostream>
#include <cmath>
using namespace std;

class BinaryToOctalConverter {
private:
    long long binaryNumber;
    int octalNumber;

public:
    BinaryToOctalConverter(long long bin) : binaryNumber(bin), octalNumber(0) {
        convertBinaryToOctal();
    }
    void convertBinaryToOctal() {
        int decimalNumber = 0, i = 0;
        long long tempBinary = binaryNumber;
        while (tempBinary != 0) {
            decimalNumber += (tempBinary % 10) * pow(2, i);
            ++i;
            tempBinary /= 10;
        }

        i = 1;
        octalNumber = 0;
        while (decimalNumber != 0) {
            octalNumber += (decimalNumber % 8) * i;
            decimalNumber /= 8;
            i *= 10;
        }
    }
    void displayOctal() {
        cout << "Octal equivalent: " << octalNumber << endl;
    }
};

int main() {
    long long binaryNum;

    cout << "Enter a binary number: ";
    cin >> binaryNum;
    BinaryToOctalConverter converter(binaryNum);
    converter.displayOctal();

    return 0;
}

