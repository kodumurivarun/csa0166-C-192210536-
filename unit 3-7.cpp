#include <iostream>
using namespace std;

class PrimeChecker {
private:
    int number;
    bool isPrime(int num) {
        if (num <= 1) return false;
        if (num == 2 || num == 3) return true;
        if (num % 2 == 0 || num % 3 == 0) return false;
        for (int i = 5; i * i <= num; i += 6) {
            if (num % i == 0 || num % (i + 2) == 0) return false;
        }
        return true;
    }

public:
    PrimeChecker(int num) : number(num) {
        bool found = false;
        for (int i = 2; i <= number / 2; ++i) {
            if (isPrime(i) && isPrime(number - i)) {
                cout << number << " can be expressed as the sum of " << i << " and " << (number - i) << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << number << " cannot be expressed as the sum of two prime numbers." << endl;
        }
    }
    ~PrimeChecker() {
        cout << "Destructor called." << endl;
    }
};

int main() {
    PrimeChecker checker(34); 

    return 0;
}

