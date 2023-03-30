#include <stdio.h>
#include <string.h>
#define MAX_LEN 1000

int main (void) {

    size_t n = 0;
    char str1[MAX_LEN], str2[MAX_LEN], dummy;

    printf("Enter the first string: ");
    scanf("%s", str1);
    scanf("%c", &dummy);

    printf("Enter the second string: ");
    scanf("%s", str2);
    scanf("%c", &dummy);

    printf("Enter the number of characters to append: ");
    scanf("%zu", &n);

    strncat(str1, str2, n);

    printf("The appended string is '%s' and its length is %zu.\n", str1, strlen(str1));
    return 0;
}
