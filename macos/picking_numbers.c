#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *arr, i, n, j, min_index = 1, max_length = 1, counter = 1;

    printf("Please enter the size of the array:");
    scanf("%d",&n);

    arr = (int*)malloc(n * sizeof(int));

    printf("Please enter the elements of the array:\n");
    for(i = 0; i < n; i++){
        printf("%d. element:", i+1);
        scanf("%d", arr+i);
    }

    for (i = 0; i < n; i++) {
        for (j = min_index; j < n; j++) {
            if (abs(arr[i] - arr[j]) <= 1){
                counter +=1;
            }
        }
        if(max_length < counter){
            max_length = counter;
        }
        min_index +=1;
    }

    printf("The max length of subarray: %d\n", max_length);
    free (arr);
    return 0;
}
