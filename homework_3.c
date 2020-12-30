#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int first_dice_roll(void);
int roll_to_win(int n);


int main(void)
{
    int roll, win_roll, try = 1;
    char start, dummy;

    srand((unsigned) time(0));

    printf("Start the game [y, n]:");
    scanf("%c", &start);
    scanf("%c", &dummy);

    if(start == 'y'){
        printf("Let's start!!\n");
    }
    else if(start == 'n'){
        printf("Okayyy :(\n");
        exit (0);
    }
    else{
        printf("Invalid entry.\n");
        exit (0);
    }

    win_roll = first_dice_roll();
    printf("Now you need to roll a %d to win.\n", win_roll);

    try = roll_to_win(win_roll);

    printf("It took you %d tries to win.\n", try);

    return 0;
}

int first_dice_roll(void)
{
    int dice1, dice2, roll, win_roll;

    dice1 = 1 + rand()%6;
    dice2 = 1 + rand()%6;
    roll = dice1 + dice2;    

    printf("Your rolled: %d + %d = %d\n", dice1, dice2, roll);
    
    if(roll == 7 || roll == 11){
        printf("You won at fist try!!!\n");
        exit (0);
    }
    else if(roll == 2 || roll == 3 || roll == 12){
        printf("You lost :(\n");
        exit (0);
    }
    else{
        win_roll = roll;
        return win_roll;
    }
}


int roll_to_win(int n)
{
    int dice1, dice2, roll, i = 1;

    do{
        dice1 = 1 + rand()%6;
        dice2 = 1 + rand()%6;
        roll = dice1 + dice2;
        printf("Your rolled: %d + %d = %d\n", dice1, dice2, roll);
        i++;
    } while (roll != n);
    
    return i;
}