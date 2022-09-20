#include <stdio.h>

int reverseDigit(int num){
    int rev=0,digit;
    for (int i = 100; i >= 1; i/=10)
    {
        digit = num%10;
        num /=10;
        digit *= i;
        rev+=digit;
    }
    return rev;  
}

int reverse(int num){
    int rev;
    if(num/100 != 0)
        rev = reverseDigit(num);
    else
        rev = num*100;
    return rev;
}


int main (void){
    int num, rev;
    printf("enter a number \n");
    scanf("%d", &num);
    rev = reverse(num);
    printf("reverse: %d", rev);
    printf("\n");
    if(num>rev)
        num -= rev;
    else 
        num = rev-num;
    rev = reverse(num);
    printf("reverse: %d", rev);
    printf("\n");
    printf("number: %d", num);
    printf("\n");
    printf("%d", num+rev);
    
    return 0;
}