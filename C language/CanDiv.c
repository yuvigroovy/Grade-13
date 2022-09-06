#include <stdio.h>

void main(){

    int x,y;
    
    printf("insert the two numbers \n");
    scanf("%d %d", &x, &y);
    
    if(x%y==0 || y%x==0)
        printf("true");
    else
        printf("false");
}