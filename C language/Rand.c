#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
   	srand((time(NULL)));
    
   	int num = 1 + (int)(rand() % 100), count, guess;
    while(guess != num){
        printf("enter your guess \n");
        scanf("%d", &guess);
        if(guess > num)
            printf("your guess is higher than the number \n");
        else if(guess < num)
            printf("your guess is smaller than the number \n");
    }
    printf("you guessed correctrly");
    return 0;
}
