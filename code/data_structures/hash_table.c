#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


const int TABLE_SIZE = 10;


typedef struct Node{
    
    int key;
    char value[20];
    bool isHead;
    bool hasTail;
    struct Node *ptr;

}Node;


// Below is hardly a hash I mean it's super simple... Just not ready to implement proper hashing since I want to
// understand that for realsies but atm tryna just get hashmap/table down.
int hash(int key){

    key = (key * 8) + 3;
    return key;

}


void addEntry(Node *arr[], Node *node, int index){
    
    index %= TABLE_SIZE;

    if(arr[index]->isHead == true){
        
    }

}


int main(){

    Node arr[TABLE_SIZE];




    return 0;

}