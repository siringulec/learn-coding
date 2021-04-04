#include <stdio.h>
#define ARRAY_SIZE 10

int main(void) {
    float fractions[ARRAY_SIZE] = {0};
    fractions[8] = 1.667;
    fractions[9] = 3.333;
    printf("Sixth element of the array is: %0.2f\n", fractions[5]);
    printf("Nineth element of the array is: %0.2f\n", fractions[8]);
    return 0;
}
