#include <stdio.h>
#define MAX_LENGTH 100

int main(int argc, char const *argv[])
{
    int current_weight, weights[MAX_LENGTH], capacity, truck_number, n, i;

    truck_number = 0;
    current_weight = 0;
    //read input
    
    printf("Please enter the number of weights:");
    scanf("%d", &n);


    printf("Please enter the capacity of the trucks:");
    scanf("%d", &capacity);


    for (i = 0; i < n; i++)
    {
        printf("Enter the %d. weight and make sure it isn't higher than the capacity:", i+1);
        scanf("%d" , &weights[i]);
    }
    
    //calculate truck number
    
    for (i = 0; i < n; i++)
    {
        if(current_weight + weights[i] <= capacity)
        {
            current_weight += weights[i];
        }
        else
        {
            truck_number++;
            current_weight = weights[i];
        }
    }
    truck_number++;

    //print result 

    printf("You will need %d trucks.\n" , truck_number);

    return 0;
}
