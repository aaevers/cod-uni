#include <stdio.h>
#include <stdlib.h>


#define TABLE_SIZE 100;


typedef struct Node{
    
    int key;
    char value[20];
    struct Node *ptr;

}Node;


// Below is hardly a hash I mean it's super simple... Just not ready to implement proper hashing since I want to
// understand that for realsies but atm tryna just get hashmap/table down.
int hash(int key){

    key = (key * 8) + 3;
    return key;

}


void addEntry(){
    
}




int main(){






    return 0;

}