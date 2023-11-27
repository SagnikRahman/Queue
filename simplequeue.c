#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100 // Define the maximum size of the queue
int queue[MAX_SIZE];
int front = -1;
int rear = -1;
// Function to check if the queue is empty
bool isEmpty() {
    return front == -1 && rear == -1;
}
// Function to check if the queue is full
bool isFull() {
    return rear == MAX_SIZE - 1;
}
// Function to add an element to the rear of the queue (enqueue)
void enqueue(int data) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    }
    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear++;
    }
    queue[rear] = data;
}
// Function to remove an element from the front of the queue (dequeue)
void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue.\n");
        return;
    }
    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
}
// Function to display the elements of the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}
int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();
    dequeue();
    dequeue();
    display();
    enqueue(6);
    enqueue(7);
    display();
    return 0;
}
