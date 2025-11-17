#include <stdio.h>
#define SIZE 5
int queue[SIZE], front = 0, rear = -1;
void enqueue(int x) 
{
if(rear == SIZE - 1) printf("Overflow\n");
else queue[++rear] = x;
}

void dequeue() {
if(front > rear) printf("Underflow\n");
else printf("Deleted: %d\n", queue[front++]);
}

void display() {
if(front > rear) printf("Queue Empty\n");
else {
printf("Queue: ");
for(int i = front; i <= rear; i++) printf("%d ", queue[i]);
printf("\n");
}
}

int main() {
enqueue(10);
enqueue(20);
display();
dequeue();
display();
}
