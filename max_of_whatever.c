#include <stdio.h>
#define MAX_LEN 1000

int main(int argc, char const *argv[])
{
    int n, i, a[MAX_LEN],tmp;

    //take input
    printf("Please enter how many numbers you want:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the %d. number:", i + 1);
        scanf("%d", &a[i]);
    }

    //sort array last element is the biggest one
    for (i = 0; i < n-1; i++)
    {
        if (a[i] > a[i+1])
        {
            tmp = a[i];
            a[i] = a[i+1];
            a[i+1] = tmp;
        }
    }
    
    //print  the last element
    printf("Max num is:%d\n", a[n-1]);
    return 0;
}
