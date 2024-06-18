
#include<stdio.h>
#define MAXSIZE 8

int stack[MAXSIZE];
int top= -1 ;
//Checks if the stack is empty
int isEmpty() {
    if (top == -1) {
        return -1 ;
    }
        else {
        return 0;
        }
}
// Checks if the stack is full.
int isFull () {
    if (top == MAXSIZE -1) {
        return 1;
    }
    else {
        return 0;
    }
}
//Returns the top element without removing it.
int peek() {
    return stack[top] ;
}

int pop() {
    int data ;
    if(!isEmpty()) { //!isEmpty() is true when the stack is not empty.
        data =stack[top] ;
        top = top -1 ;
        return data;
    }
    else {
        printf ("stack is empty. \n");
        return -1 ;
    }
}

void push(int data) {
    
if (!isFull()) {
top = top + 1;
stack[top] = data;
}
 else {
printf("Could not insert data, Stack is full.\n");
}

}

int main () {
    push (3) ;
    push (5) ;
    push (9);
    push (1);
    
    printf ("element at the top of the stack %d\n", peek());
    printf ("elements: \n");
    
    while (!isEmpty()) {
        int data = pop();
        printf ("%d\n", data);
    }
    printf ("stack is full: %s\n", isFull()? "true" : "false");
    printf("Stack is empty: %s\n", isEmpty() ? "true" : "false");
    
    return 0;
}
