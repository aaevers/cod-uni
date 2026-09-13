#include <stdio.h>
#include <stdlib.h>

// Had to specify Node in the struct part so we can self reference inside the struct.
typedef struct Node{
    int value;
    struct Node *ptr;
}Node;


int main(){


    // Little weird but what we see here is we take the size of Node struct, since we are just assigning one we only need to find size of one. We mallocate that and when malloc returns a generic pointer we then use
    // the (Node *) to sort of tell it to change into a Node pointer.
    Node *first = (Node *)malloc(sizeof(Node));
    Node *second = (Node *)malloc(sizeof(Node));
    Node *third = (Node *)malloc(sizeof(Node));
    Node *fourth = (Node *)malloc(sizeof(Node));


    // Big deal: check the allocation since if seg fault that's bad!!!!!
    if(!first){
        printf("The mem allocation for first got bunked...");
        return 1;
    }
    else if(!second){
        printf("The mem allocation for second got bunked...");
        free(first);
        return 1;
    }
    else if(!third){
        printf("The mem allocation for third got bunked...");
        free(first);
        free(second);
        return 1;
    }
    else if(!fourth){
        printf("The mem allocation for fourth got bunked...");
        free(first);
        free(second);
        free(third);
        return 1;
    }


    // Below is value assignment to the memory locations and then pointing to the next address on the heap.
    first->value = 30;
    first->ptr = second;

    second->value = 99;
    second->ptr = third;

    third->value = 69;
    third->ptr = fourth;

    fourth->value = 45;
    fourth->ptr = NULL;


    // Printing the linked list, we create a temp pointer to hold our values so we can then overwrite temp with the next value by the end of the while loop.
    Node *temp = first;
    while(temp != NULL){
        printf("%d -> ", temp->value);
        temp = temp->ptr;
    }
    printf("END\n");

    // Here we do a similar thing with temp, we use it to hold the first node, then we create a temp2 to hold the pointer to the next node so after we free memory we can reassign that next pointer to temp and start while loop over.
    temp = first;
    while(temp != NULL){
        Node *temp2 = temp->ptr;
        free(temp);
        temp = temp2;
    }


    return 0;
}