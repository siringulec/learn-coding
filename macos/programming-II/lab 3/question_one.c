#include <stdio.h>
#include <string.h>
#define MAX_LEN 1000

int main(void) {
    int n, i, isFound = 0;
    char str[MAX_LEN][MAX_LEN], dummy;

    printf("Please enter the number of strings:");
    scanf("%d", &n);

    printf("Please enter the strings bellow.\n");
    for (i = 0; i < n; i++){
        printf("The %d. string: ", i+1);
        scanf("%s", str[i]);
        scanf("%c", &dummy);
    }

    for (i = 0; i < n; i++){
        if (str[i][0] == 'T' && str[i][1] == 'h'){
            printf("Found at %d: '%s'\n", i+1, str[i]);
            isFound +=1;
        }
    }

    if (isFound == 0)
        printf("Not found.\n");

    return 0;
}
