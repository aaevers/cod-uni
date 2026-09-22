#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left, int mid, int right){

    int n1 = mid - left + 1;
    int n2 = right - mid;


    // Temp array's below
    int leftArr[n1];
    int rightArr[n2];

    // Putting data into those arrays
    for(int i = 0; i < n1; i++){
        leftArr[i] = arr[left + i];
    }
    for(int j = 0; j < n2; j++){
        rightArr[j] = arr[mid + 1 + j];
    }

    // Merge them back
    int i = 0;
    int j = 0;
    int k = left;

    while(i < n1 && j < n2){
        if(leftArr[i] <= rightArr[j]){
            arr[k] = leftArr[i];
            i++;
        }
        else{
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // Finishes any remaining elements
    while(i < n1){
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // Finishes any remaining elements
    while(j < n2){
        arr[k] = rightArr[j];
        j++;
        k++;
    }

}


void mergeSort(int arr[], int left, int right){

    if(left < right){
        int mid = left + (right - left) / 2; // Finds midpoint

        // Sort the first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }


}


int main(){

    int arr[] = {8, 2, 5, 3, 4, 9, 7, 6, 1};


    mergeSort(arr, 0, 8);


    for(int i = 0; i < 9; i++){
        printf("%d ", arr[i]);
    }


    return 0;
}