#include <stdio.h>
#define MAX_LENGTH 1000

int main(int argc, char const *argv[])
{
    int n, i;
    long long int A[MAX_LENGTH];
    // dizinin eleman sayısı okunur
    printf("Lütfen dizinin eleman sayısını giriniz :");
    scanf("%d", &n);
    
    A[0] = 1;
    A[1] = 1;

    for ( i = 2; i < n; i++)
    {
        A[i] = A[i-1] + A[i-2];   
    }
    
    for (i = 0; i < n; i++){
        printf("%d - %lld\n", i+1, A[i]);
    }

    return 0;
}
