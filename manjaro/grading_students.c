#include <stdio.h>
#include <stdlib.h>

void rounder(int* g, int n)
{
    for(int i = 0; i < n; i++)
    {
        int q = g[i]%5;

        if(q != 0 && q > 2 && g[i] >= 38)
        {
            int d = g[i] / 5;
            g[i] = (d + 1)*5; 
        } 
    }
}


int main(int argc, char const *argv[])
{
    int* g, n, q, i;

    printf("Enter an integer:");
    scanf("%d", &n);

    g = (int*) malloc(n * sizeof(int));

    printf("Enter the grades:");

    for(i = 0; i < n; i++)
    { 
        scanf("%d", g + i);
    }
 
    for(i = 0; i < n; i++)
    {  
        rounder(g, n);
        printf("%d\n", g[i]);
    }

    free(g);
    return 0;
}

