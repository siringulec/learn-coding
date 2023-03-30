#include <stdio.h>

int main(void) {
    int x, y;
    for (int i = 0; i < 4; i++) {
        printf("Please enter two intergers:");
        scanf("%i%d", &x, &y);
        printf("Output: %d %d\n", x, y);
    }
    return 0;
}
