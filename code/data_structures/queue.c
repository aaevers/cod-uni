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
    if(!isFull(queue)){
        queue->arr[queue->back] = value;
        queue->back++;
    }
    else{
        printf("Queue is full...\n");
    }
}

// When front slider increments forward we are dequeueing the foremost element.
void dequeue(Queue *queue){
    if(!isEmpty(queue)){
        queue->front++;
    }
    else{
        printf("Queue is empty dog...\n");
    }
}

// Similar peek to stack, nothing crazy, need to remember that the first slider is itself a spot so to see the first element of the queue we need to add 1 to the front
int peek(Queue *queue){
    if(!isEmpty(queue)){
        return queue->arr[queue->front + 1];
    }
    else{
        printf("Queue is empty!\n");
        return -1;
    }
}

// This is to print the queue it follows the front slider + 1 because the front slider is used to cover values we dequeue we want the value right after it since that's the actual front value of the queue, or for instance front = -1 you need to make it 0
void printQueue(Queue *queue){
    if(!isEmpty(queue)){
        for(int i = queue->front + 1; i < queue->back; i++){
            printf("%d\n", queue->arr[i]);
        }
    }
    else{
        printf("Empty array.\n");
    }
}



int main(){

    Queue que;

    initialize(&que);

    printf("%d\n", isEmpty(&que));

    enqueue(&que, 6);
    enqueue(&que, 9);
    enqueue(&que, 2);
    enqueue(&que, 7);

    printQueue(&que);

    dequeue(&que);

    printQueue(&que);

    printf("%d\n", peek(&que));


    return 0;
}


