struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class Stack {
private:
    Node* top;

public:
    Stack() : top(nullptr) {}

    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = top;
        top = newNode;
    }

    int pop() {
        if (isEmpty()) {
            // Handle stack underflow
            return -1; // Or throw an exception
        }
        int poppedData = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return poppedData;
    }

    int peek() {
        if (isEmpty()) {
            // Handle empty stack
            return -1; // Or throw an exception
        }
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }
};
