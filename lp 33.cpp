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

    
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        cout << value << " inserted at the beginning.\n";
    }

    
    void displayList() {
        if (!head) {
            cout << "Linked list is empty.\n";
            return;
        }

        cout << "Linked list elements are:";
        Node* temp = head;
        while (temp) {
            cout << " " << temp->data;
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main() {
    LinkedList list;

    list.insertAtBeginning(10);
    list.insertAtBeginning(20);
    list.insertAtBeginning(30);

    list.displayList();

    return 0;
}

