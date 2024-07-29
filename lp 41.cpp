#include <iostream>
#include <vector>
#include <stdexcept> 
using namespace std;


template<typename T>
class Stack {
private:
    vector<T> elements; 

public:

    void push(const T& element) {
        elements.push_back(element);
    }

    
    T pop() {
        if (empty()) {
            throw out_of_range("Stack<>::pop(): stack is empty");
        }
        T element = elements.back();
        elements.pop_back();
        return element;
    }


    T& top() {
        if (empty()) {
            throw out_of_range("Stack<>::top(): stack is empty");
        }
        return elements.back();
    }

    
    bool empty() const {
        return elements.empty();
    }
};

int main() {

    Stack<int> intStack;

    
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    
    cout << "Top element of intStack: " << intStack.top() << endl;

    
    cout << "Pop elements from intStack: ";
    while (!intStack.empty()) {
        cout << intStack.pop() << " ";
    }
    cout << endl;

    return 0;
}

