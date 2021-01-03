#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int dice_roll(void);
void game_logic(void);
void game_loop(int n);

int main(void)
{
    char start, dummy;

    srand(time(NULL));

    printf("Start the game [y, n]:");
    scanf("%c", &start);
    scanf("%c", &dummy);

    if(start == 'y'){
        printf("Let's start!!\n");
    }
    else if(start == 'n'){
        exit (0);
    }
    else{
        printf("Invalid entry.\n");
        exit (0);
    }
    game_logic();
    return 0;
}

int dice_roll(void)
{
    int dice1, dice2, roll;

    dice1 = 1 + rand()%6;
    dice2 = 1 + rand()%6;
    roll = dice1 + dice2; 
    printf("You rolled: %d + %d = %d\n", dice1, dice2, roll);   
    
    return roll;
}

void game_logic(void)
{
    int roll, win_roll, win = 1, try = 1;
    
    roll = dice_roll(); 

    if(roll == 7 || roll == 11){
        game_loop(win);
    }
    else if(roll == 2 || roll == 3 || roll == 12){
        win = 0;
        game_loop(win);
    }
    else{
        win_roll = roll; 
    }
    
    printf("Now you need to roll a %d to win. But if you roll a 7 you lose.\n", win_roll);
   
    roll = dice_roll();
    if(roll == 7){
        win = 0;
        try +=1;
        game_loop(win);
    }

    while (roll != win_roll){    
        roll = dice_roll();
        if(roll == 7){
            win = 0;
            game_loop(win);
        }
        try +=1;
    }
    printf("It took you %d tries.\n", try);
    game_loop(win);
}

void game_loop(int n)
{
    char start, dummy;

    if(n == 1){
        printf("You won!!!!\n");
    }
    else{
        printf("You lost :(\n");
    }

    printf("Do you wanna play again [y, n]:");
    scanf("%c", &start);
    scanf("%c", &dummy);

    if(start == 'y'){
        game_logic();
    }
    else if(start == 'n'){
        printf("Okay.\n");
        exit (0);
    }
    else{
        printf("Invalid entry.\n");
        exit (0);
    }
}