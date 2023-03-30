#include <stdio.h>
#define MAX_LEN 10

void printArray(int array[], int size, int n);

int main(void) {
    int arr[MAX_LEN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printArray (arr, 10, 0);
    return 0;
}
void printArray(int array[], int size, int n){
    if (size != 0) {
        printf("%d\n", array[n]);
        printArray(array, size-1, n+1);
    }
}
