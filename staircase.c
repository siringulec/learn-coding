#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i, s, n, st, j;

    printf("Enter the length:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {    
        s = n - (i + 1);

        for (j = 0; j < s; j++)
        {
            printf(" ");
        }        
                
        for (st = 0; st < (i + 1) ; st ++)
        {
            printf("*");
        }

        printf("\n");
    }    
    return 0;

}
