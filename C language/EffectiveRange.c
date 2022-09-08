#include <stdio.h>
#include <math.h>

int main(void){
    
    int x1,y1,z1,x2,y2,z2;
    double distance, effectiveDistance;

    printf("insert first coordinents \n");
    scanf("%d %d %d", & x1, & y1, &z1);

    printf("insert second coordinents \n");
    scanf("%d %d %d", & x2, & y2, &z2);

    printf("insert effective distance");
    scanf("%lf", & effectiveDistance);
    
    distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2) + pow((z2-z1),2));

    if(effectiveDistance > distance)
        printf("true");
    else
        printf("false");

    return 0;
}