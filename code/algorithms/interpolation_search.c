#include <stdio.h>
#include <stdlib.h>



// Similar to the binary search we're goign to set a high and low bound
int interpolationSearch(int arr[], int size, int value){

    int high = size - 1;
    int low = 0;

    while(value >= arr[low] && value <= arr[high] && low <= high){

        int probe = low + (high - low) * (value - arr[low]) / (arr[high] - arr[low]);

    }



    return 1;
}



int main(){








    return 0;
}