#include <stdio.h>

#define ROWS 4
#define COLS 5

void main(){
    unsigned int rowIndex, colIndex;
    int flag=0, b, ri, ci , arr[ROWS][COLS]; /* {2,7,12,3,17},{27,22,4,0,1},{9,-2,8,13,-9},{-1,5,-20,20,10};*/
    printf("insert b \n");
    scanf("%d", &b);
    printf("insert numbers into the array \n");
    for(int row=0; row<ROWS; row++){
        for(int col=0; col<COLS; col++){
            scanf("%d", &arr[row][col]);
            if(arr[row][col] == b){
                rowIndex = row;
                colIndex = col;
            }
        }
    }
    for (int row=rowIndex; row < ROWS; row++)
    {
        for (int col = colIndex; col < COLS; col++)
        {
            printf("%d ", arr[row][col]);
        }
        printf("\n");
    }
    
}