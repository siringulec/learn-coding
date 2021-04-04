#include<stdio.h>


int main(int argc, char const *argv[])
{
    int i, a[3], b[3], result[2] = {0, 0};

    for (i = 0; i < 3; i++)
    {
        printf("Please enter the %d. one of the first set of points:", i + 1);
        scanf("%d", &a[i]);
        
        printf("Please enter the %d. one of the second set of points:", i + 1);
        scanf("%d", &b[i]);
        
        if (a[i] > b[i])
        {
            result[0]++;
        }
        else  if (a[i] < b[i])
        {
            result[1]++;
        }
    }
  

    if(result[0] > result[1])
    {
        printf("The winner is....... THE FIRST CONTESTANT!!!!!\n");
    }
    else{
        printf("The winner is....... THE SECOND CONTESTANT!!!!!\n");
    }
  
    printf("Result of the first contestent: %d\n", result[0]);
    printf("Result of the second contestent: %d\n", result[1]);
    
    return 0;
}
