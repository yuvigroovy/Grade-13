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

int mostTimes(int arr[], int size){
    int counter[100];
    for (int i = 0; i < 100; i++)
    {
        counter[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        counter[arr[i]]++;
    }
    
    return getMaxIndex(counter, 100);
    
}

int getMaxIndex(int arr[], int size){
    int max = INT_MIN;
    int index=0;
    for(int i=0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
            index = i;
        }    
    }
    return index;
}

int main(void){

    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        printf("enter a number \n");
        scanf("%d", &arr[i]);
    }
    
    printf("%d", mostTimes(arr,SIZE));
    

    return 0;
}