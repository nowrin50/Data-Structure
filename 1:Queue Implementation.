
#include<stdio.h>
#define MAXSIZE 100 

int queue[MAXSIZE];
int front = 0;
int rear = -1;

//Enqueue Function:
void enqueue (int item) {
    if (rear == MAXSIZE -1) {  //Check if the queue is full
        printf ("queue is full.cant enqueue.");
        return ;
    }
    rear ++;
    queue[rear]=item;    // Add the item to the queue
    printf("%d enqueued to the queue.\n",item);
}
//Dequeue Function:
int dequeue() {
    int item;
    if (front >rear) {  //Check if the queue is empty
        printf("queue is empty.can't dequeue. \n");
        return -1;
    }
    item = queue[front];  // Retrieve item from the front of the queue
    front ++;
    return item;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printf("%d dequeued from the queue.\n", dequeue());
    printf("%d dequeued from the queue.\n", dequeue());
    return 0;
}
