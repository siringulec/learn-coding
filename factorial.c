#include <stdio.h>

int factorial(int n);

int main(int argc, char const *argv[])
{
    int result, number;

    printf("Enter a number:");
    scanf("%d", &number);

    result = factorial(number);

    printf("The factorial of %d is: %d\n", number, result);
    
    return 0;
}

int factorial(int n)
{
    if(n >= 2)
    {
        return n * factorial(n - 1);
    }
    else 
    {
        return n;
    }
}