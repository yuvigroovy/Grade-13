#include <stdio.h>

int main(void){
    int number, number2;
    int divider;

    printf("insert 2 numbers \n");
    scanf("%d %d", &number, &number2);

    printf("common divider: \n");

    if(number>number2){
        
        for(divider = number2-1; divider>1; divider=divider-1){
            if(number2%divider==0 && number%divider==0){
                printf("%d", divider);
                printf("\n");
            }

        }   
    }
    else{
          for(divider = number-1; divider>1; divider=divider-1){
            if(number2%divider==0 && number%divider==0){
                printf("%d", divider);
                printf("\n");
            }

        }  
    }
    return 0;
}