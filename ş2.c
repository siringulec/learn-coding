#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main(int argc, char const *argv[])
{
    int guess, number;

    srand((unsigned) time(0));
    number = rand()%100;

    printf("Guess a number:");
    scanf("%d", &guess);

    printf("Generated number is: %d\n", number);

    for(int i = 0; i < 3; i++)
    {
        if(i < 2){
            if(guess == number){
                printf("You are correct!\n");
                break;
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
        }
        else{
            printf("You are out of guesses.\n");
        }
    }
    return 0;
}
