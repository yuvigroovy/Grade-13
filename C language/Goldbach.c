#include <stdio.h>

int isPrime(int num){
    int divider;
    for(divider = num-1; divider>1; divider=divider-1){
        if(num%divider==0){
            return 0;
        }    
    }
    return 1;
}


int nextPrime(int curPrime){
    int next=curPrime+2;
    while (isPrime(next)==0)
    {
        next+=2;
    }
    
    return next;
}


int main(void){
    long number = 2;
    int prime1 =1,diff;
    while(number<100000){
        diff = number -prime1;
        if(isPrime(diff)==1)
            number+=2;
        else
            prime1 = nextPrime(prime1);
    }
    if(number == 100000)
        printf("true");
    else
        printf("false, %ld", number);
    return 0;
}