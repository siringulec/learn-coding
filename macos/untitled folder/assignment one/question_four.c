#include <stdio.h>
#define SIZE 100

size_t linearSearch(const int array[], int key, size_t size);

int main(void)
{
    int a[SIZE];

    for(size_t x = 0; x < SIZE; ++x){
        a[x] = 2*x;
    }

    printf("Enter integer search key: ");

    int searchKey;

    scanf("%d", &searchKey);

    int index = linearSearch(a, searchKey, SIZE);

    if (index != -1) {
        printf("Found value at index %d\n", index);
    }

    else {
        puts("Value not found");
    }
}

size_t linearSearch(const int array[], int key, size_t size){
    if (size == 0){
        return -1;
    }
    if (array[size-1] == key){
        return size-1;
    }
    return linearSearch(array, key, size-1);
}
