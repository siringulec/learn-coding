#include <stdio.h>

int main()
{
    int a, b;

    printf("Please enter two integers first being the dividend:");
    scanf("%d %d", &a, &b);

    if(b != 0 && a%b == 0)
    {
        printf("%d is divisible by %d.\n", a, b);
    }
    else
    {
        printf("%d isn't divisible by %d.\n", a, b);
    }
    return 0;
}
