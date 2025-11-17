#include <stdio.h>
#include <stdlib.h>

// Node structure (as defined above)
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Global head pointer
struct Node* head = NULL;

// Function prototypes for operations (e.g., insertAtBeginning, displayForward, etc.)
// ... (implementation of these functions would be here)

int main() {
    int choice, data, key;

    while (1) {
        printf("\nDoubly Linked List Operations:\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Delete Node by Value\n");
        printf("4. Display Forward\n");
        printf("5. Display Backward\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                // Call insertAtBeginning function
                break;
            case 2:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                // Call insertAtEnd function
                break;
            case 3:
                printf("Enter data of node to delete: ");
                scanf("%d", &key);
                // Call deleteNode function
                break;
            case 4:
                // Call displayForward function
                break;
            case 5:
                // Call displayBackward function (requires a tail pointer or traversal to find tail)
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
