#include <iostream>
using namespace std;

class DivisibleByNine {
private:
    int start;
    int end;
    int sum;

public:
    DivisibleByNine() : start(100), end(200), sum(0) {}
    void findAndSumDivisibleByNine() {
        for (int i = start; i <= end; ++i) {
            if (i % 9 == 0) {
                sum += i;
            }
        }
    }
    ~DivisibleByNine() {
        cout << "Sum of numbers divisible by 9 between " << start << " and " << end << " is: " << sum << endl;
    }
};

int main() {
    DivisibleByNine obj;
    obj.findAndSumDivisibleByNine();

    return 0;
}

