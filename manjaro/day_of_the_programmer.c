#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* itoa(int val, int base){
	
	static char buf[32] = {0};
	
	int i = 30;
	
	for(; val && i ; --i, val /= base)
	
		buf[i] = "0123456789abcdef"[val % base];
	
	return &buf[i+1];
	
}
 
int main()
{
    int isLeap = 0, year;
    char *result = malloc(100 * sizeof(char));
    char buffer[4];

    printf("Enter year:");
    scanf("%d", &year);
  
    if(year == 1918){
        strcpy(result, "26.09.1918");
        printf("%s\n", result);
        exit (0);
    }
    else if(year % 4 == 0){
        if(year < 1918){
            isLeap = 1;
        }
        else{
            if(year % 100 != 0 || year % 400 == 0){
                isLeap = 1;
            }
        }
    }

    strcpy(buffer, itoa(year, 10));

    if(isLeap == 1) {
        strcpy(result, "12.09.");
    }
    else{
        strcpy(result, "13.09.");
    }

    strcat(result, buffer);

    printf("%s\n", result);
    return 0;
}

