#include <stdbool.h>
#include <stdio.h>
#define MAX_SIZE 100


typedef struct{
    int arr[MAX_SIZE];
    int front;
    int back;
}Queue;

// Function to initialize queue, front is the slider to dequeue items from the front of the queue, the back slider is to add elements to the end. 
void initialize(Queue *queue){
    queue->front = -1;
    queue->back = 0;
}

// This just checks if the queue is empty, should be pretty clear what this checks...
bool isEmpty(Queue *queue){
    return queue->front == queue->back - 1;
}

// Just checks if the array is full, checks the back slider counter thing against the maximum size
bool isFull(Queue *queue){
    return queue->back == MAX_SIZE;
}

// Function to add item to the back of the queue, then it increments the back counter once.
void enqueue(Queue *queue, int value){
    if(!isFull){
        queue->arr[queue->back] = value;
        queue->back++;
    }
    else{
        printf("Queue is full...");
    }
}

// When front slider increments forward we are dequeueing the foremost element.
void dequeue(Queue *queue){
    if(!isEmpty){
        queue->front++;
    }
    else{
        printf("Queue is empty dog...");
    }
}


int main(){

    Queue que;

    initialize(&que);

    printf("%d", isEmpty(&que));









    return 0;
}