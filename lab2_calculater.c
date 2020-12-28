#include <stdio.h>

int main(void)
{
    int a, b;
    char operator, dummy;

    printf("Please enter an operator:");
    scanf("%c", &operator);
    scanf("%c", &dummy);

    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);

    switch(operator)
    {
        case '+':
        printf("%d + %d = %d\n", a, b, a+b);
        break;

        case '-':
        printf("%d - %d = %d\n", a, b, a-b);
        break;

        case '*':
        printf("%d * %d = %d\n", a, b, a*b);
        break;

        case '/':
        printf("%d / %d = %d\n", a, b, a/b);
        break;
    }

    return 0;
}
