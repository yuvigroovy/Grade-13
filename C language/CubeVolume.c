#include <stdio.h>
#include <math.h>

#define PIE 3.14159

int main(void){
    double r, volume, ballsVol, finalVol;

    printf("insert balls radius \n");
    scanf("%lf", &r);
    volume = pow((2*r),3);
    ballsVol = 4/3*PIE*pow(r,3);
    finalVol = volume-ballsVol;
    
    printf("%lf", finalVol);

    return 0;
}