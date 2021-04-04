#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, n;

    printf("Please enter a number:");
    scanf("%d", &n);

    for(i = 1; i <= 9; i++)
    {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}
