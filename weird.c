#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("enter:");
    scanf("%d", &n);
    
    if(n%2 == 1 || n > 5 && n < 21 )
    {
        printf("Weird\n");        
    }
    else 
    {
        printf("Not Weird\n");
    }

   return 0;
}
