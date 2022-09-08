#include <stdio.h>

int main(void){
    
    int number, i, factorial=1;

    printf("enter a number \n");
    scanf("%d", &number);

    for(i=1; i<=number; i++)
        factorial *= i;

    printf("%d", factorial);

    return 0;
}