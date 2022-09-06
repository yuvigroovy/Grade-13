#include<stdio.h>

void main(){
    int i,j, arr[3][4], k, x;
    printf("insert numbers \n");
    for(i=0; i<3; i++)
        for(j=0; j<4; j++)
            scanf("%d", & arr[i][j]);
    printf("insert k,x \n");
    scanf("%d %d", &k, &x);
    if(k<3){
        for(j=x; j<4; j++){
            if(arr[k][j] != arr[k+1][j]){
                printf("false");
                break;
            }
        }
    }
    printf("true");
}
