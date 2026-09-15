#include <stdio.h>
#include <stdlib.h>





int main(){

    int first_size;

    printf("Set first size of array: ");
    scanf("%d", &first_size);

    int *arr = malloc(first_size * sizeof(int));

    if(arr == NULL){
        printf("Trouble allocating memory... quitting...");
        return 1;
    }

    for(int i = 0; i < first_size; i++){
        printf("\nEnter item: ");
        scanf("%d", &arr[i]);
    }

    printf("First array is:\n");
    for(int i = 0; i < first_size; i++){
        if(i != first_size - 1){
            printf("%d - ", arr[i]);
        }
        else{
            printf("%d\n", arr[i]);
        }
    }


    int resize_num;

    printf("Now let's resize some shi- To exit use -1...\nEnter new array size: ");
    scanf("%d", &resize_num);
    
    while(resize_num != -1){
        int *temp = realloc(arr, resize_num * sizeof(int));
        if(temp == NULL){
            printf("Trouble allocating memory... quitting...");
            return 1;
        }
        arr = temp;
        temp = NULL;

        printf("Array resized, enter values: ");
        for(int i = 0; i < resize_num; i++){
        printf("\nEnter item: ");
        scanf("%d", &arr[i]);
        }

        printf("Your array is:\n");
        for(int i = 0; i < resize_num; i++){
            if(i != first_size - 1){
                printf("%d - ", arr[i]);
            }
            else{
                printf("%d\n", arr[i]);
            }
        }


        printf("Resize again?: ");
        scanf("%d", &resize_num);

    }



    free(arr);
    arr = NULL;



    return 0;
}