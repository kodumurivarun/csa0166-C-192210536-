#include <iostream>
#include <vector>
using namespace std;

class Item {
public:
    int code;
    float price;
    Item(int c, float p) : code(c), price(p) {}
};

class ShoppingList {
private:
    vector<Item> items;
public:
    void addItem(int code, float price) {
        items.push_back(Item(code, price));
    }

    void deleteItem(int code) {
        vector<Item>::iterator it;
        for (it = items.begin(); it != items.end(); ++it) {
            if (it->code == code) {
                items.erase(it);
                break;
            }
        }
    }

    void printTotal() {
        float total = 0;
        for (vector<Item>::iterator it = items.begin(); it != items.end(); ++it) {
            total += it->price;
        }
        cout << "Total value of order: " << total << endl;
    }
};

int main() {
    ShoppingList list;
    list.addItem(101, 20.5);
    list.addItem(102, 10.0);
    list.addItem(103, 5.5);
    list.printTotal(); 
    list.printTotal(); 
    return 0;
}
