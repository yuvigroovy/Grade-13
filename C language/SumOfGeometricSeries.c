#include <stdio.h>
#include <math.h>


int getNumAtIndex(int n, int a, int q){
    int res = (a*pow(q,n-1));
    return res;
}

int main(void){
    int n,a,q, sum1=0, sum2;
    
    printf("insert series parameters (n, a1, q) \n");
    scanf("%d %d %d", &n ,&a, &q);
    for (int i = 1; i <= n; i++)
    {
        sum1 += getNumAtIndex(i,a,q);
    }
    sum2 = (a*(pow(q,n)-1))/(q-1);
    
    if(sum1 == sum2)
        printf("the sum is: %d", sum1);
    else{
        printf("calc error");
    }
    return 0;
}