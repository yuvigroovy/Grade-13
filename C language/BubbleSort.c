#include <stdio.h>

#define SIZE 5


void printArr(int arr[], int size){
    
    for (int i = 0; i < SIZE; i++)
    {
        printf("|%d", arr[i]);
        printf("| ");
    }
}

void sort(int arr[], int size){
    int count = 1,tmp;
    while(count > 0){
        count = 0;
        for (int i = 0; i < size-1; i++)
        {
            if(arr[i] > arr[i+1]){
                tmp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = tmp;
                count ++;
            }
        }
        
    }
}

int main(void){

    int arr[SIZE], num;

    for (int i = 0; i < SIZE; i++)
    {
        printf("enter a number \n");
        scanf("%d", &arr[i]);
    }
    

    printArr(arr, SIZE);

    sort(arr, SIZE);

    printf("\n");

    printArr(arr, SIZE);

    return 0;
}