#include <stdio.h>

#define SIZE 7

int main(void){

    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        printf("enter a number \n");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("|%d", arr[i]);
        printf("| ");
    }
    
    

    return 0;
}