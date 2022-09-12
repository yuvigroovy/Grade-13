#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int getDivCount(int number){
    int divider,count=0;
    for(divider = number-1; divider>1; divider=divider-1){
        if(number%divider==0){
            count++;
        }    
    }
    return count;
}

int getPrimeCount(int arr[]){
    int count=0;
    for (int i = 0; i <  sizeof *arr; i++)
    {
        if(getDivCount(arr[i]) == 0)
            count++;
    }
    return count;
}


int main(void){
    int entered[10], generated[10], total;
    srand((time(NULL)));
    for (int i = 0; i < 10; i++)
    {
        printf("enter a number \n");
        scanf("%d", &entered[i]);
        generated[i] = 10 + (int)(rand() % 20);
    }
    total = getPrimeCount(entered)+getPrimeCount(generated);
    printf("total prime number count is: %d", total);
    return 0;
}