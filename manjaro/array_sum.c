#include<stdio.h>
#define MAX_LENGTH 100

int main(int argc, char const *argv[])
{
    int i, ar[MAX_LENGTH], n, sum = 0;

    printf("Enter the amount of  numbers to add:");
    scanf("%d",  &n);
        
    for (i =  0; i < n; i++)
    {      
        printf("Enter the %d. number:", i+1);
        scanf("%d", &ar[i]);
        sum  += ar[i];
    }
        
    printf("%d\n", sum);

    return 0;
}
