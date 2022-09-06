#include <stdio.h>
#include <math.h>

void main(){
    //vars init
    int num;
    double square;
    printf("insert a number \n");
    scanf("%d", &num);
    square = sqrt(num);
    if(square == ceil(square) || square == floor(square))
        printf("true");
    else
        printf("false");
}