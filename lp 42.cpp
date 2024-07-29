#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;

    
    Node(int value) : data(value), next(nullptr) {}
};


class LinkedList {
private:
    Node* head;

public:
    
    LinkedList() : head(nullptr) {}

    
    ~LinkedList() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }


    void insertFront(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() {
    LinkedList list;


    list.insertFront(30);
    list.insertFront(20);
    list.insertFront(10);

    cout << "Linked list elements: ";
    list.display();

    return 0;
}

