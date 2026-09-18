#include <stdio.h>
#include <stdlib.h>


int linearSearch(int arr[], int size, int value){

    for(int i = 0; i < size; i++){
        if(arr[i] == value){
            return i;
        }
    }
    
    return -1;

}




int main(){


    int myArray[] = {4, 5, 6, 7, 3, 34, 6, 32, 8};

    printf("The index of value 8 is: %d\n", linearSearch(myArray, 9, 8));

    printf("The index of value 3 is: %d\n", linearSearch(myArray, 9, 3));

    printf("The index of value 3 is: %d\n", linearSearch(myArray, 9, 34));




    return 0;
}

