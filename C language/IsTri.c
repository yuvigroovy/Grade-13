#include <stdio.h>

void main()
{
    // vars init
    int a, b, c;

    // io
    printf("insert sides a,b,c \n");
    scanf("%d %d %d ", &a, &b, &c);

    // the sum of two sides must be greater then the remaining side
    if (a + b >= c && a + c >= b && c + b >= a)
        printf("true");
    else
        printf("false");
}