#include <stdio.h>

int main (void){

    int d, q;

    printf("insert pyramid height");
    scanf("%d", &d);
    q = 1+2*(d-1);

    for(int i=1; i<=d; i++){
        for(int j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}