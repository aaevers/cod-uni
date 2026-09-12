#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>


#define MAX_SIZE 5 //Defines what the maximum number of elements is in the stack


// Just defines the structure of the stack data structure
typedef struct{
    int arr[MAX_SIZE];
    int top;
}Stack;

// Use this to set top to -1 so we know that it's a new stack
void initialize(Stack *stack){
    stack->top = -1;
}

// Just checks is stack is empty
bool isEmpty(Stack *stack){
    return stack->top == -1;
}

// This will check if stack is full, the top attribute should proliferate counters as we add more items to stack and remove as we take off stack, top could be called int counter if need be.
// MAX_SIZE - 1 is to account for top + 1 (after initialization) being index 0
bool isFull(Stack *stack){
    return stack->top >= MAX_SIZE - 1;
}

// Function to add / push item onto the stack, (brain ded sorry going to use OOP terms) we access stack object array like stack.arr[++stack.top], we increment the top counter first before commiting value to that location in the array,
// That account for the jump from top == -1 to top == 0 thus starting an appropriate array index.
void push(Stack *stack, int value){
    if(!isFull(stack)){
        stack->arr[++stack->top] = value;
    }
    else{
        printf("Stack is full...");
    }
}

// This will pop the top number in the stack, it returns it, we don't need to change the value at all since we decrement down -- the next time we do a push it will overwrite the memory used for the previous value.
int pop(Stack *stack){
    if(stack->top > -1){
        int popped = stack->arr[stack->top];
        stack->top--;
        return popped;
    }
    else{
        printf("Can't pop, nothing in array ya donk...");
    }
}


// Just used to peek at top element! Pretty simple huh...
int peek(Stack *stack){
    if(!isEmpty(stack)){
        return stack->arr[stack->top];
    }
    else{
        printf("Stack is empty! Or somethin");
    }
}



int main(){

    /*Stack Data Structure*/
    // Using struct->attribute that's similar to using object.attribute in OOP languages


    Stack stink;

    initialize(&stink);

    printf("%d", isEmpty(&stink));
    isFull(&stink);

    push(&stink, 5);
    push(&stink, 6);
    printf("%d", peek(&stink));
    push(&stink, 13);
    push(&stink, 9);
    push(&stink, 32);
    push(&stink, 8);

    printf("%d", pop(&stink));
    printf("%d", pop(&stink));

    isEmpty(&stink);
    isFull(&stink);

    push(&stink, 32);
    push(&stink, 8);

    isFull(&stink);


    return 0;
}

