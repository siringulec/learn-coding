#include <stdio.h>
#include <string.h>
#define MAX_LEN 1000

int main(void) {
    size_t len = 0;
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
        len = strlen(str[i]);
        if (str[i][len-4] == 't' && str[i][len-3] == 'i' && str[i][len-2] == 'o' && str[i][len-1] == 'n'){
            printf("Found at %d: '%s'\n", i+1, str[i]);
            isFound +=1;
        }
    }

    if (isFound == 0)
        printf("Not found.\n");

    return 0;

}
