#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);


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
        printf("%d + %d = %d\n", a, b, add(a, b));
        break;

        case '-':
        printf("%d - %d = %d\n", a, b, subtract(a, b));
        break;

        case '*':
        printf("%d * %d = %d\n", a, b, multiply(a ,b));
        break;

        case '/':
        printf("%d / %d = %d\n", a, b, divide(a ,b));
        break;
    }
    return 0;
}


int add(int a, int b){
    return a+b;
}
int subtract(int a, int b){
    return a-b;
}
int multiply(int a, int b){
    return a*b;
}
int divide(int a, int b){
    return a/b;
}
