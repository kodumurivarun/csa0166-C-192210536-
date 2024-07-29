#include <stdio.h>
#include <stdlib.h>


struct StackNode {
    int data;
    struct StackNode* next;
};


struct Stack {
    struct StackNode* top;
};


struct StackNode* newNode(int data) {
    struct StackNode* stackNode = (struct StackNode*)malloc(sizeof(struct StackNode));
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}


struct Stack* createStack() {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = NULL;
    return stack;
}


void push(struct Stack* stack, int data) {
    struct StackNode* stackNode = newNode(data);
    stackNode->next = stack->top;
    stack->top = stackNode;
}


int pop(struct Stack* stack) {
    if (stack->top == NULL) {
        printf("Stack underflow\n");
        return -1;
    }
    struct StackNode* temp = stack->top;
    int popped = temp->data;
    stack->top = stack->top->next;
    free(temp);
    return popped;
}


struct Queue {
    struct Stack* stack1;  
    struct Stack* stack2; 
};


struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->stack1 = createStack();
    queue->stack2 = createStack();
    return queue;
}


void enqueue(struct Queue* queue, int data) {
    
    push(queue->stack1, data);
}


int dequeue(struct Queue* queue) {
    
    if (queue->stack1->top == NULL && queue->stack2->top == NULL) {
        printf("Queue is empty\n");
        return -1;
    }


    if (queue->stack2->top == NULL) {
        while (queue->stack1->top != NULL) {
            push(queue->stack2, pop(queue->stack1));
        }
    }

    
    return pop(queue->stack2);
}


int main() {
    struct Queue* queue = createQueue();

    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);

    printf("Dequeued element: %d\n", dequeue(queue)); 
    printf("Dequeued element: %d\n", dequeue(queue)); 

    enqueue(queue, 4);

    printf("Dequeued element: %d\n", dequeue(queue)); 
    printf("Dequeued element: %d\n", dequeue(queue)); 
    printf("Dequeued element: %d\n", dequeue(queue)); 

    return 0;
}

