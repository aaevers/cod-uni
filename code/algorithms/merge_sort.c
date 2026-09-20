#include <stdio.h>
#include <stdlib.h>



void mergeSort();



void merge(int leftArr[], int rightArr[], int arr[]);







int main(){


    int arr[] = {8, 2, 5, 3, 4, 9, 7, 6, 1};






    for(int i = 0; i < 9; i++){
        printf("%d ", arr[i]);
    }


    return 0;
}