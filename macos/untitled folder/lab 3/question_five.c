#include <stdio.h>
#include <string.h>

int main(void) {
    int i, j;
    char str[6][15] = {"siringulec", "gemlik", "mudanya", "gursu", "zeytinbagi", "iznik"}, tmp[15];

    for (i = 0; i < 6 ; i++)
         for (j = i + 1; j < 6; j++){
          if (strcmp(str[i], str[j]) > 0){
             strcpy(tmp, str[i]);
             strcpy(str[i], str[j]);
             strcpy(str[j], tmp);
         }
      }

    printf("Alphabetized strings: \n");
    for (i = 0; i < 6; i++)
        printf("%s\n",str[i]);
    return 0;
}
