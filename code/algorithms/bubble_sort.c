#include <stdio.h>
#include <stdlib.h>





void bubbleSort(int arr[], int size){


    for(int i = 0; i < size; i++){ // This is how we do the loop enough times to go through the whole array.
        
        int counter = 0; // This is how we track if a swap operation actually happened during this pass, if nothing happened we don't need to iterate anymore and can save ourselves a few passes if it sorts < num of elements.

        for(int k = 0; k < size; k++){
            printf("%d ", arr[k]);
        }
        printf("\n");

        for(int j = 0; j < size - 1; j++){ // This does the swap, pretty simple for every element in this pass we run our number up to the top!
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                counter++; // This only proliferates if the swap action was performed.
            }
        }

        if(counter == 0){
            return; // If no counter / swap operation happened this loop then we break the loop so as to save ourselves a few iterations over the array! :)
        }

    }


}



int main(){



    int myArray[] = {4, 6, 8, 2, 1, 3, 5, 9, 7};



    bubbleSort(myArray, 9);




    return 0;
}