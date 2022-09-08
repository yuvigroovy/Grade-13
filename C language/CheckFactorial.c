#include <stdio.h>

int main(void){

    int i, number, original, count=1, factorial=1;
    printf("insert number \n");
    scanf("%d", &number);

    original = number;

    while((number%count)==0){
        number =  number/count;
        count++;
    }
        
    for(i=1; i<count; i++)
        factorial *= i;
    if(factorial == original)
        printf("factorial of: %d", count-1);
    else
        printf("not a factorial");
    
    return 0;
}