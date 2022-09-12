#include <stdio.h>

int getNumAtIndex(int n, int a, int d){
    int res = (a+((n-1)*d));
    return res;
}

int main(void){
    int n,a,d, sum1=0, sum2;
    
    printf("insert series parameters (n, a1, d) \n");
    scanf("%d %d %d", &n ,&a, &d);
    for (int i = 1; i <= n; i++)
    {
        sum1 += getNumAtIndex(i,a,d);
    }
    sum2 = ((n*(a+getNumAtIndex(n,a,d)))/(2));
    
    if(sum1 == sum2)
        printf("the sum is: %d", sum1);
    else
        printf("calc error");
    return 0;
}