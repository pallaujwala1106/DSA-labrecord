singly linked list creations

#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(struct Node* *head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
    printf("Node with data %d inserted at the beginning successfully.\n", data);
}

void insertAtEnd(struct Node* *head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
{
*head=newNode;
}
else
{
struct Node *temp = head;
while (temp->next != NULL) temp = temp->next;
temp->next = newNode;
printf("Node inserted successfully\n");
void insertAtPosition(struct Node **head, int data, int position)
{
if (position < 1)
{
printf("Invalid position.\n");
return;
}
if (position == 1)
{
insertAtBeginning(head, data);
return;
}
struct Node *prev = head;
for (int k=1; (k < position - 1 && prev!=NULL); k++)
{
prev = prev->next;
}
if (prev == NULL)
{
Printf ("given position is out of range!\n");
return;
//only when given position is valid
struct Node *newNode = createNode(data);
newNode->next = prev->next;
prev->next = newNode;
printf ("Node with data %d inserted at position %d successfully.\n", data, position);
// Delete a node by value.
void DeleteNode (struct Node **head, int valueToDelete)
{
if (*head == NULL)
printf ("Linked list is empty, deletion operation can't be performed");
return;
struct Node *temp = *head;
//If head itself holds the value
if (temp != NULL && temp->data == valueToDelete )
{
*head = temp->next;
free(temp);
printf ("data %d deleted from list.\n", valueToDelete);
return;
}
// Search for the value
struct Node *prev = head;
    while (prev->next != NULL)
    {
        if (prev->next->data == Value To Delete)
        {
            temp = prev->next;
            prev->next = temp->next;
            free(temp);
            printf("Value %d deleted from list.\n", Value To Delete);
            return;
        }
        prev = prev->next;
    }
    // If key not found
    if (prev->next == NULL)
    {
        printf("Element %d not found.\n", Value to Delete);
        return;
    }
}

// Display all elements
void Display_list(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
struct Node *temp;
temp = head;
printf ("\nLinked list nodes: \n");
while (temp != NULL)
{
    printf ("\n\tLoc=%p\tData=%d\tNext = %p\n", temp, temp->data, temp->next);
    temp = temp->next;
}
//main function
int main()
{
    struct Node *head = NULL;
    int choice, data, pos;
    while (1)
    {
        printf ("\n---Linked List Menu---\n");
        printf ("\n1. Insert at Beginning\n");
        printf ("\n2. Insert at End \n");
        printf ("\n3. Insert at position \n");
        printf ("\n4. Delete by value \n");
        printf ("\n5. Display List\n");
        printf ("\n6. Exit \n");
        printf ("\nEnter your choice: ");
        scanf ("%d", & choice);
        switch (choice)
        {
case 1:
printf ("Enter data to insert: ");
scanf ("%d", &data);
InsertAtBeginning (&head, data);
break;
Case 2:
printf("Enter data to insert: ");
Scanf("%d", &data);
InsertAtEnd(&head, data);
break;
case 3:
printf("Enter data and position to insert: ");
scanf("%d%d", &data, &pos);
InsertAtPosition(&head, data, pos);
break;
Case 4:
printf("Enter value to delete: ");
Scanf("%d", &data);
break;
Case 5:
DisplayList(head);
break;
Case 6:
printf("Exiting \n");
exit(0);
default:
printf("Invalid Choice! Try again.\n");
}
return 0;
}
