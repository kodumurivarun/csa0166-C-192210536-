#include <iostream>
using namespace std;

class NumberReverser {
private:
    int reversedNumber;

public:
    NumberReverser(int num) {
        reversedNumber = 0;
        int temp = num;
        while (temp != 0) {
            int digit = temp % 10;
            reversedNumber = reversedNumber * 10 + digit;
            temp /= 10;
        }
        cout << "Original number: " << num << endl;
        cout << "Reversed number: " << reversedNumber << endl;
    }
};

int main() {
    NumberReverser reverser(12345); 

    return 0;
}

