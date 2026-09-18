#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



// Finds the index of the input number
int binarySearch(int arr[], int size, int value){

    int low = 0;
    int high = size - 1;
    

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] == value){
            return mid;
        }
        else if(arr[mid] > value){
            high = mid- 1;
        }
        else if(arr[mid] < value){
            low = mid + 1;
        }
    }

    return -1;
}




int main(){



    int array[] = {90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111};

    int value = 94;


    printf("The index for %d is %d!\n", value, binarySearch(array, 22, value));

    printf("The index for %d is %d!\n", 105, binarySearch(array, 22, 105));

    printf("The index for %d is %d!\n", 110, binarySearch(array, 22, 110));

    printf("The index for %d is %d!\n", 99, binarySearch(array, 22, 99));


    return 0;
}