#include <stdio.h>
#include <stdlib.h>



void insertionSort(int arr[], int size){


    for(int i = 1; i < size; i++){
        int temp = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        
        for(int g = 0; g < size; g++){
            printf("%d ", arr[g]);
        }
        printf("\n");
    }


}




int main(){



    int myArray[] = {9, 1, 8, 2, 7, 3, 6, 5, 4};


    insertionSort(myArray, 9);




    return 0;
}