#include <stdio.h>
#include <string.h>
#define MAX_LEN 10000



int main(int argc, char const *argv[])
{
    int n, i, j;
    char  s[MAX_LEN];
    
    printf("Enter the number of cases:");
    scanf("%d", &n);


    for (i = 0; i < n; i++)
    {
        printf("Enter the %d. string:", i + 1);
        scanf("%s", s);

        for(j = 0; j < strlen(s); j++)
        {
            if(j == 0 || j % 2 == 0)
            {   
                printf("%c", s[j]);
            }
        }
    
        printf(" ");

        for(j = 0; j < strlen(s); j++)
        {
            if(j % 2 != 0)
            {   
                printf("%c", s[j]);
            }
        }
    
        printf("\n");
    
    }
    return 0;
}
