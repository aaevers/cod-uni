#include <stdio.h>
#include <stdlib.h>


void swap(int x, int y){
    
    int temp = x;
    x = y;
    y = temp;

}


void quickSort(int arr[], int start, int end){

    if(end <= start){
        return;
    }

    int pivot = partition(arr, start, end);
    quickSort(arr, start, pivot - 1);
    quickSort(arr, pivot + 1, end);

}


int partition(int arr[], int start, int end){

    int pivot = arr[end];
    int j = start - 1;

    for(int i = start; i < end; i++){
        if(arr[i] < pivot){
            j++;
            swap(arr[i], arr[j]);
        }
    }
    j++;
    swap(arr[end], arr[j]);

}


int main(){

    int arr[] = {8, 2, 5, 3, 9, 4, 7, 6, 1};









    return 0;
}