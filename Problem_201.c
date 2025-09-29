#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100  

char* stack[MAX];  
int top = -1;


int isEmpty() {
    return top == -1;
}


int isFull() {
    return top == MAX - 1;
}


void push(char* str) {
    if (isFull()) {
        printf("Stack Overflow! Cannot push '%s'\n", str);
        return;
    }

    stack[++top] = strdup(str);  
    if (stack[top] == NULL) {
        printf("Memory allocation failed!\n");
        top--;
    } else {
        printf("Pushed: %s\n", str);
    }
}


char* pop() {
    if (isEmpty()) {
        printf("Stack Underflow! Cannot pop.\n");
        return NULL;
    }

    char* result = stack[top];
    stack[top--] = NULL;  
    return result;        
}


void peek() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
    } else {
        printf("Top of stack: %s\n", stack[top]);
    }
}


void display() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return;
    }

    printf("Stack contents (top to bottom):\n");
    for (int i = top; i >= 0; i--) {
        printf("%d: %s\n", i, stack[i]);
    }
}


void cleanup() {
    while (!isEmpty()) {
        free(stack[top]);
        stack[top--] = NULL;
    }
}

int main() {
    char* str;


    push("Hello");
    push("World");
    push("This is a dynamic string stack!");
    push("Another long string");

    printf("\n");
    display();

    printf("\n");
    peek();


    printf("\n");
    str = pop();  
    if (str) {
        printf("Popped: %s\n", str);
        free(str);  
    }

    str = pop();
    if (str) {
        printf("Popped: %s\n", str);
        free(str);
    }

    printf("\n");
    display();


    cleanup();

    return 0;
}

