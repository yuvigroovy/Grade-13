#include<stdio.h>

int main(void){

    float i;

    printf("for \n");

    for(i=5.0; i>0; i=i-0.5){
        printf("%.1f",i );
        printf("\n");
    }    

    printf("while \n");

    i=5.0;
    while(i>0){
        printf("%.1f",i );
        printf("\n");
        i = i -0.5;
    }

    printf("do while \n");

    i=5.0;
    do
    {
        printf("%.1f",i );
        printf("\n");
        i = i -0.5;
    } while (i>0);

    return 0;
}