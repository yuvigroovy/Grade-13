#include <stdio.h>

int main(void){
    //declerations
    int num;
    
    printf("inset a number \n");
    scanf("%d", &num);

    while(num != 1){
        printf("--> %d", num);
        if(num%2==0)
            num/=2;
        else
            num = num*3+1;
    }
    printf("--> 1");
    return 0;
}