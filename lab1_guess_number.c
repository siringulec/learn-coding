#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define TRUE 1
#define FALSE 0

int main(int argc, char const *argv[])
{
    int guess, number, win_flag, i = 0;

    srand((unsigned) time(0));
    number = rand()%300;

    printf("Guess a number:");
    scanf("%d", &guess);

    win_flag = FALSE;
    while (!win_flag && i < 10){
        if(guess == number){
            printf("You are correct!\n");
            win_flag = TRUE;
        }
        else if(guess > number){
            printf("You should go lower.\n");
            printf("Guess an another number:");
            scanf("%d", &guess);   
        }
        else{
            printf("You should go higher.\n");                
            printf("Guess an another number:");
            scanf("%d", &guess);   
        }
        i++;
    }

    if(!win_flag)
        printf("You are out of guesses.\n");
    
    return 0;
}
