#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int dice_roll(void);
void draw_dice(void);

int main(void)
{
    char start, dummy;
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
        printf("Invalid\n");
        exit (0);
    }

    return 0;
}

int dice_roll(void)
{
    int dice1, dice2;
    srand((unsigned) time(0));
    dice1 = 1 + rand()%6;
    dice2 = 1 + rand()%6;
    return dice1 + dice2;
}

void draw_dice(void)
{

}