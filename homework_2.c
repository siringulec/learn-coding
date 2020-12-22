#include<stdio.h>

int find_digits(long int n){
    int digit = 0;
    while(n != 0){
        n = n/10;
        digit++;
    }
    return digit;
}

int main(void)
{
    long int number;
    printf("Please enter a number:");
    scanf("%ld", &number);
    if(number == 0 || number < 0){
    printf("Enter a valid number:");
    scanf("%ld", &number);
    }
    printf("The number of digits: %d\n", find_digits(number));
    return 0;
}
