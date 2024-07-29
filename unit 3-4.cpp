#include <iostream>
using namespace std;

class SeriesSum {
private:
    int limit;
    int sum;

public:
    SeriesSum(int n) {
        limit = n;
        sum = 0;
        for (int i = 1; i <= limit; ++i) {
            sum += i;
        }
    }

    void displaySum() {
        cout << "Sum of the series from 1 to " << limit << " is: " << sum << endl;
    }
};

int main() {
    SeriesSum series(5); 

    series.displaySum();

    return 0;
}

