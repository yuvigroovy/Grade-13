#include <stdio.h>

int main(void){
    int number;
    int divider,sum=0;

    printf("insert number \n");
    scanf("%d", &number);

    for(divider = number-1; divider>0; divider=divider-1){
        if(number%divider==0)
            sum+= divider; 
    }
    if(number == sum)
        printf("perfect number");
    else
        printf("non perfect number");
    
    
    return 0;
}