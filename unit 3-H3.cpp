#include <iostream>
using namespace std;

class AddAmount {
private:
    double amount;

public:
    
    AddAmount() : amount(50) {}

    AddAmount(double addAmount) : amount(50 + addAmount) {}

    void displayAmount() {
        cout << "Final amount in the Piggie Bank: $" << amount << endl;
    }
};

int main() {
    
    AddAmount piggyBank1;      
    AddAmount piggyBank2(30);  

    piggyBank1.displayAmount();
    piggyBank2.displayAmount();

    return 0;
}

