#include <stdio.h>
#include <stdlib.h>



// Similar to the binary search we're goign to set a high and low bound
int interpolationSearch(int arr[], int size, int value){

    int high = size - 1;
    int low = 0;

    while(value >= arr[low] && value <= arr[high] && low <= high){

        int probe = low + (high - low) * (value - arr[low]) / (arr[high] - arr[low]);
        /*
        Explanation of what's above: The (arr[high] - arr[low]) we see as the denominator on the right will give us the difference of highest and lowest value in the array, meaning we have a value range for the array
        We could have 20 elements in an array but if the values only go from 0-10 we want to know.
        Now that we have a value range we want to know our chosen value's place within that range. Suppose we have an array of 10 elements ranging from 5-15 in value. Now let's say we want to find the value 9.
        In the numerator (value - arr[low]) we are taking our value and subtracting the floor of the value range away, this will leave us with how high in the order our value is. 9 (what we wish to find) - 5 (the value floor) = 4 (9 is the fifth smallest number in our value range, remembering indexing starts at 0).
        Now we see that the right side of the equation evaluates to 4/10, the value we're looking for is in the fifth position of our value range of 10.
        Seeing the (high - low) that is us taking an index range, how many elements exist in total in the array. When we multiply that against our 4/10 it means we will look in the 4/10 spot of the array based on index.
        Even if the array has 20 elements that just means we would look at index 8 (4/10 == 8/20).
        Finally the reason we add low at the end is to establish the floor of our search, when low slides up to narrow our search we want to re-establish our floor. Same for ceiling but inverse lol.
        */

        printf("Probe: %d\n", probe);

        if(arr[probe] == value){
            return probe;
        }
        else if(arr[probe] < value){
            low = probe + 1; // Moves the floor up so that we can look within a "narrower array"
        }
        else{
            high = probe - 1; // Moves the ceiling down so that we can look within a "narrower array"
        }


    }

    return 1;
}


void output(int index){
    if(index != 1){
        printf("Element found at index: %d\n", index);
    }
    else{
        printf("Element not found...");
    }
}

int main(){

    int myArray[] = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22};

    
    int index = interpolationSearch(myArray, 18, 9);

    output(index);

    index = interpolationSearch(myArray, 18, 11);

    output(index);

    int secondArray[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192};

    index = interpolationSearch(secondArray, 14, 2048);

    output(index);


    return 0;
}