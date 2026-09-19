#include <stdio.h>
#include <stdlib.h>




void selectionSort(int arr[], int size){

    int temp;

    for(int i = 0; i < size; i++){

        int min = arr[i];

        for(int k = 0; k < size; k++){ // Shows us what each iteration looks like
            printf("%d ", arr[k]);
        }
        printf("\n");

        for(int j = i; j < size; j++){
            if(arr[j] < min){
                temp = min;
                min = arr[j];
                arr[j] = temp;
            }
        }
        arr[i] = min;
        
    }


}



int main(){


    int myArray[] = {9, 1, 3, 5, 8, 7, 4, 6, 2};


    selectionSort(myArray, 9);

    int bingBongArr[] = {20, 5, 2004, 128, 2007, 6, 14, 4, 15, 128, 16, 7, 34, 2001, 99, 128};

    selectionSort(bingBongArr, 16);


    return 0;
}