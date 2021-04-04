#include <stdio.h>

int prime(int n);

int main(int argc, char const *argv[])
{
    int number, isPrime = 1;

    printf("Please enter a number: ");
    scanf("%d", &number);

    isPrime = prime(number);

    if(isPrime == 1){
        printf("%d is a prime number.\n", number);
    } 
    else{
        printf("%d is not a prime number.\n", number);
    }
    return 0;
}

int prime(int n){
    int Prime = 1;
    for(int i = 2; i < n; i++){
        if( n%i == 0){
            Prime = 0;
            return Prime;    
        }
    }
    return Prime;
}