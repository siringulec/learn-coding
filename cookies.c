#include <stdio.h>
#define  MAX_LEN 1000

int main(int argc, char const *argv[])
{
    int n, k, c[MAX_LEN], i, j, tmp, output = 0, min;

    //take input
    printf("Please enter number of cookies and min sweetness with a space in between:");
    scanf("%d %d", &n, &k);

    printf("Enter %d elements\n", n);

    for (i = 0; i < n; i++)
    {
        printf("%d-", i+1);
        scanf("%d", c + i);
    }
    
    //print input array
    printf("Your array:");

    for(i = 0; i < n; i++)
    {
        printf("%d\t", *(c + i));
    }

    printf("\n");
   
    //sort array first    
    
    
    
    //not  workin???
    while(*c < k)
    {
        //incressing  sweetness
        c[i+1] = c[i] + 2 * c[i+1];
        
        //deleting  first element and resizin array
        for(j = 0; j < n-1; j++)
        {
            c[j] = c[j+1];
        }
        
        n -= 1;
        
        //sort changed array  
        for(i = 0; i < n-1; i++)
        {
            if(c[i] > c[i+1])
            {
                tmp = c[i];
                c[i] = c[i+1];
                c[i+1] = tmp;
            }
        }
        output += 1;
    }
    
    //print result
    printf("The new  array:");
    
    for(i = 0; i < n; i++)
    {
        printf("%d\t", *(c + i));
    }
    
    printf("\n");
    
    if(*c < k)
    {
        printf("ERROR\n");
    }
    else
    {
        printf("Number of oparations you need:%d\n", output);
    }
    
    return 0;
}



