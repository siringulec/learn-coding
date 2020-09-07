#include <stdio.h>

int main(int argc, char const *argv[])
{
    int  forward, backward, step, isBack, amount, result, total, quotient, remainder;
    
    //read input

    printf("Please enter the amound of steps:");
    scanf("%d", &step);

    printf("Please enter the amound steps forwards and backwards with a comma in between:");
    scanf("%d,%d", &forward, &backward);
  
    //check if forward or backward
    
    if (forward > backward)
    {
        amount = forward - backward;
        isBack =  0;
    }
    else 
    {
        amount = backward - forward;
        isBack = 1;
    }

    //calculate  steps
    
    total = forward + backward;
    quotient = step/total;
    remainder = step%total;

    
    if (remainder > forward)
    {
        result = amount * quotient + 2*forward - remainder;
    }
    else
    {
        result = amount * quotient + remainder;
    }
    
    //print result
    
    if (isBack == 1)
    {
        printf ("%d steps backwards.\n", result);
    }
    else 
    {
        printf ("%d steps forwards.\n", result);
    }
    
    return 0;
}
