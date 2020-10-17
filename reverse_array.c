#include <stdio.h>
#define MAX_LENGHT 1000 

int main(int argc, char const *argv[])
{
    int n, i, j, a[MAX_LENGHT], ra[MAX_LENGHT], tmp;

    //take input
    printf("Please enter the size of the array:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Please enter the %d. number:", i + 1);
        scanf("%d", &a[i]);
    }

    //reverse  array
    j = (n-1);
    
    for (i = 0; i < n; i++)
    {
        ra[i] = a[j]; 
        j -= 1;
    }
    
    //alternative reverse same array
    for (i = 0; i < n/2; i++)
    {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        j -= 1;
    }
    //alternative's print ^^^
    printf("The new array:\t");
    
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    


    // print result
    printf("The new array:\t");
    
    for (i = 0; i < n; i++)
    {
        printf("%d\t", ra[i]);
    }
    
    printf("\n");

    return 0;
}
