#include <stdio.h>

int main(void)
{
    int i;
    int array[6][6] = {{6, 14, 15, 16, 21, 10},
                       {19, 20, 23, 50, 1, 2},
                       {7, 56, 66, 8, 90, 10},
                       {6, 54, 56, 78, 34, 26},
                       {18, 56, 78, 9, 90, 13},
                       {14, 15, 16, 17, 77, 88}};

    printf("The principal diagonal values of the matrix:\n\n");

    for(i = 0; i < 6; i++)
    {
        printf("%3d ", array[i][i] );
    }  
    printf("\n");                      
    return 0;
}
