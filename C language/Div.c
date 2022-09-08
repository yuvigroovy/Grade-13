#include <stdio.h>

int main(void){
    int number;
    int divider;

    printf("insert number \n");
    scanf("%d", &number);

    printf("dividers: \n");

    for(divider = number-1; divider>1; divider=divider-1){
        if(number%divider==0){
            printf("%d", divider);
            printf("\n");
        }    
    }
    
    return 0;
}