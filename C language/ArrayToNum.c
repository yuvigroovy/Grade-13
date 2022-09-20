#include <stdio.h>

#define SIZE 5

void printArr(int arr[], int size){
    for (int i = 0; i < SIZE; i++)
    {
        printf("|%d", arr[i]);
        printf("| ");
    }
}

int toNum(int arr[], int size){
    int num=0;
    int mul = 10000;
    for (int i = 0; i < size; i++)
    {
        num += arr[i] * mul;
        mul /= 10;
    }

    return num;
    
}

int main(void){

    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        printf("enter a number \n");
        scanf("%d", &arr[i]);
    }
    
    printf("%d", toNum(arr, SIZE));
    

    return 0;
}