#include <stdio.h>

double harmonicAvg(int num){
    int divider, count;
    double sumDiv=0;
    for(divider = num-1; divider>1; divider=divider-1){
        if(num%divider==0){
            count++;
            sumDiv += (1.0/divider);
        }    
    }
    return (count/sumDiv);
}

int main(void){

    int num,avg;
    double trueAvg;
    printf("enter number");
    scanf("%d", &num);

    trueAvg = harmonicAvg(num);
    avg = harmonicAvg(num);
    if(trueAvg - avg ==0.0)
        printf("true");
    else{
        printf("false");

        printf("%lf", trueAvg);
    }
    return 0;
}