#include <stdio.h>

double factorial(int n){
    double factorial=1;
    for(int i=1; i<=n; i++)
        factorial *= i;
    return factorial;
}

double calc(int n){
    return (1/factorial(n));
}

int main(void){
    int n;
    double e;
    printf("enter n \n");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        e += calc(i);
    }
    printf("%lf", e);
    return 0;
}