#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Queue {
    struct Node* rear;   // rear pointer (rear->next is front)
};

// Create an empty circular queue
struct Queue* createQueue() {
    struct Queue* q = (struct Queue*) malloc(sizeof(struct Queue));
    q->rear = NULL;
    return q;
}

// Enqueue an element
void enqueue(struct Queue* q, int value) {
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = value;

    if (q->rear == NULL) {
        temp->next = temp;   // single node loops to itself
        q->rear = temp;
    } else {
        temp->next = q->rear->next; // new node points to front
        q->rear->next = temp;       // old rear points to new node
        q->rear = temp;             // update rear
    }
}

// Dequeue an element
int dequeue(struct Queue* q) {
    if (q->rear == NULL) {
        printf("Queue Underflow\n");
        return -1;
    }

    struct Node* front = q->rear->next;
    int value = front->data;

    if (front == q->rear) {        // Only one node
        q->rear = NULL;
    } else {
        q->rear->next = front->next; // Skip front node
    }

    free(front);
    return value;
}

// Peek front element
int peek(struct Queue* q) {
    if (q->rear == NULL) {
        printf("Queue is empty\n");
        return -1;
    }
    return q->rear->next->data;
}

// Check if empty
int isEmpty(struct Que
