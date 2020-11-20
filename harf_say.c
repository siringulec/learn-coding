#include <stdio.h>
#define MAX_LENGTH 1000


int main(int argc, char *argv[]) {
    FILE *fp; // File pointer
    char buffer[MAX_LENGTH];
    int length;

    // Dosya Açma işlemi
    fp = fopen("makale.txt", "r");

    // Dosyayı buffera yaz
    length = fread(buffer, 1, MAX_LENGTH, fp);
    buffer[length - 1] = '\0';


    // Harf Sayfa kısmı bu kısmın altına ilgili kod yazılmalı


    // Dosya Kapama işlemi.
    fclose(fp);

    return 0;
}
