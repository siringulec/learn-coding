#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int  forward, backward, step, amount, result, total, quotient, remainder;
    
    printf("Please enter the amound of steps:");
    scanf("%d", &step);

    printf("Please enter the amound steps forwards and backwards with a comma in between:");
    scanf("%d,%d", &forward, &backward);

    
    total = forward + backward;
    quotient = step/total;
    remainder = step%total;
    amount = abs(forward - backward);
    
    if (remainder > forward)
    {
        result = amount * quotient + 2*forward - remainder;
    }
    else
    {
        result = amount * quotient + remainder;
    }
    
   
    if (backward > forward)
    {
        printf ("%d steps backwards.\n", result);
    }
    else 
    {
        printf ("%d steps forwards.\n", result);
    }
    
    return 0;
}
