#include <stdio.h>

int repeated_digits(int n);
int sum_matrix(int array[5][5]);

int main(void)
{
    int total = 0, occurrence;
    int martrix[5][5] = {{14, 10, 87, 45, 17},
                       {90, 46, 48, 49, 41},
                       {42, 62, 45, 36, 38},
                       {56, 45, 53, 59, 38},
                       {62, 64, 77, 83, 90}};

    total = sum_matrix(martrix);

    printf("The sum of the matrix is %d.\n", total);     

    occurrence = repeated_digits(total);

    if(occurrence == 0){
        printf("The number %d doesn't have repeated digits.\n", total);
    }
    else{
        printf("The number %d has %d repeated digits.\n", total, occurrence+1);
    }
    return 0;
}

int sum_matrix(int arr[5][5])
{
    int i, j, sum1 = 0 , sum2 = 0, total = 0;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            sum1 += arr[i][j]; // sums the rows
            sum2 += arr[j][i]; // sums the collumns
            total += arr[i][j]; // sum of the matrix
        }
        printf("Sum of %d. row is %d.\n", i+1, sum1); 
        printf("Sum of %d. column is %d.\n", i+1, sum2);
        
        sum1 = 0; //reassing zero to sum1 and sum2
        sum2 = 0; 
    }    
    return total;
}

int repeated_digits( int n)
{
    int i = 0, j, k, min_index = 1, occurrence = 0, digits[100];

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