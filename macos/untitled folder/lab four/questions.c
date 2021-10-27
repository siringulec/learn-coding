#include <stdio.h>

int main(void) {
    //printf("%s\n", "Happy Birthday");

    //printf("%s\n", "Hello");

    //printf("%s\n", "This is a string");

    //printf("\"%s\"\n", "Bon Voyage");

    //char day[] = "Sunday";
    //printf("%c\n", day[3]);

    //char str[] = "Enter your name: ";
    //puts(str);

    //printf("%f\n", 123.456);

    //printf("%c%c\n", 'O', 'K');

    //char s[10];
    //scanf("%c", &s[7]);

    printf("1.%-10d\n", 10000);
    printf("2.%s\n", "This is a string");
    printf("3.%*.*lf\n", 8, 3, 1024.987654);
    printf("4.%#o\n%#X\n%#e\n", 17, 17, 1008.83689);
    printf("5.% d\n%+d\n", 1000000, 1000000);
    printf("6.%10.2E\n", 444.93738);
    printf("7.%10.2g\n", 444.93738);
    printf("8.%f\n", 10.987);
    return 0;
}
