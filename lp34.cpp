#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;

    
    Node(int value) : data(value), next(nullptr) {}
};


class Stack {
private:
    Node* top; 

public:
    Stack() : top(nullptr) {}

    
    bool isEmpty() {
        return top == nullptr;
    }

    
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        cout << value << " pushed to stack.\n";
    }

    
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow. Cannot pop from empty stack.\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        cout << temp->data << " popped from stack.\n";
        delete temp;
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

