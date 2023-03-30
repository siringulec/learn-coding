#include <stdio.h>

int main(void) {
    char ch;
    printf("Please enter a character to get the corresponding ASCII code: ");
    scanf("%c", &ch);
    printf("The ASCII code of %c is %d.\n", ch, ch);
    return 0;
}
