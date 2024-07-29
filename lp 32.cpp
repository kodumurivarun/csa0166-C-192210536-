#include <iostream>
using namespace std;

const int MAX_SIZE = 5; 


class Stack {
private:
    int arr[MAX_SIZE]; 
    int top;           

public:
    
    Stack() : top(-1) {}

    
    bool isEmpty() {
        return top == -1;
    }

    
    void push(int value) {
        if (top == MAX_SIZE - 1) {
            cout << "Stack Overflow. Cannot push " << value << ".\n";
            return;
        }
        arr[++top] = value;
        cout << value << " pushed to stack.\n";
    }

    
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow. Cannot pop from empty stack.\n";
            return;
        }
        cout << arr[top--] << " popped from stack.\n";
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop(); 

    return 0;
}

