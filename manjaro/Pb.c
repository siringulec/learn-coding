#include <stdio.h>

int repeated_digits(long int n)
{
    int i = 0, j, k, min_index = 1, occurrence = 1, digits[100];

    while(n > 0){
        digits [i] = n%10;
        n = n/10;
        i++; 
    }
    for(j = 0; j < i; j++){
        for(k = min_index; k < i; k++){
            if( digits[j] != 10 && digits[j] == digits[k]){
                occurrence++; 
                digits[k] = 10;               
            }
        }
        min_index++;
    }
    return occurrence;
}

int main(void)
{
    long int n = 1245464, x = 0;
    x = repeated_digits(n);
    printf("%d\n", x);
    return 0;
}