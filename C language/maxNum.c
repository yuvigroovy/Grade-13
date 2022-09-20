#include <stdio.h>
#include <limits.h>

#define SIZE 5

void printArr(int arr[], int size){
    for (int i = 0; i < SIZE; i++)
    {
        printf("|%d", arr[i]);
        printf("| ");
    }
}

int max(int arr[], int size){
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main(void){

    int arr[SIZE];
    int min = INT_MIN;

    for (int i = 0; i < SIZE; i++)
    {
        printf("enter a number \n");
        scanf("%d", &arr[i]);
    }
    
    printArr(arr, SIZE);
    
    printf("\n");
    
    printf("%d", max(arr, SIZE));

    return 0;
}