#include <iostream>
using namespace std;

double divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw "Division by zero error";
    } else if (numerator == 0) {
        throw "Zero as numerator error";
    } else if (numerator < 0 || denominator < 0) {
        throw "Negative number error";
    }
    
    return static_cast<double>(numerator) / denominator;
}

int main() {
    int numerator, denominator;
    
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;
    
    try {
        double result = divide(numerator, denominator);
        cout << "Result of division: " << result << endl;
    }
    catch (const char* msg) {
        cerr << "Exception caught: " << msg << endl;
    }
    catch (int errCode) {
        cerr << "Exception caught with error code: " << errCode << endl;
    }
    catch (...) {
        cerr << "Unknown exception caught" << endl;
    }
    
    cout << "Program continues after exception handling" << endl;
    
    return 0;
}

