#include<stdio.h>

void main(){
    int row, col, arr[8][8], k;
    printf("insert numbers \n");
    for(row=0; row<8; row++)
        for(col=0; col<8; col++)
            scanf("%d" ,&arr[row][col]);
    printf("insert k \n");
    scanf("%d" ,&k);
    for(row=0; row<7; row++){
        for(col=0; col<7; col++){
            if(k == arr[row][col] && k == arr[row][col+1] && k == arr[row+1][col] && k == arr[row+1][col+1]){
                printf("true");
                break;
            }    
        }
    }
    printf("false");
}
