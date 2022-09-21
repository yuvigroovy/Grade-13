#include <stdio.h>
#include <limits.h>

#define SIZE 5

int getMaxIndex(int arr[], int size);

void printArr(int arr[], int size){
    
    for (int i = 0; i < SIZE; i++)
    {
        printf("|%d", arr[i]);
        printf("| ");
    }
}

int search(int arr[], int size, int num){
    for(int i=0; i<size; i++){
        if(arr[i] == num){
            return i;
        }    
    }
    return -1;
}

int main(void){

    int arr[SIZE], num;

    for (int i = 0; i < SIZE; i++)
    {
        printf("enter a number \n");
        scanf("%d", &arr[i]);
    }
    
    printf("enter number to search \n");
    scanf("%d", &num);

    printf("%d", search(arr,SIZE,num));

    return 0;
}