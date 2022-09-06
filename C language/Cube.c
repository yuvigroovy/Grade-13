#include <stdio.h>
#include <math.h>

void main(){
    int h,l,w;
    double bottomCross, mainCross;

    printf("insert height length and width \n");
    scanf("%d %d %d ", &h, &l, &w);

    bottomCross = sqrt(pow(w,2) + pow(l,2));
    mainCross = sqrt(pow(bottomCross,2) + pow(h,2));

    printf("the length is: %fl", mainCross);

}