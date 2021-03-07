#include <stdio.h>

int main(void)
{
    int i, j, sum1 , sum2;
    int array[5][5] = {{14, 10, 87, 45, 17},
                       {90, 46, 48, 49, 41},
                       {42, 62, 45, 36, 38},
                       {56, 45, 53, 59, 38},
                       {62, 64, 77, 83, 90}};

    for(i = 0; i < 5; i++)
    {
        sum1 = 0;
        sum2 = 0;
        for(j = 0; j < 5; j++)
        {
            sum1 += array[i][j];
            sum2 += array[j][i];
        }
        printf("Sum of %d. row: %d\n", i+1, sum1);
        printf("Sum of %d. column: %d\n", i+1, sum2);
    }                      
    return 0;
}
