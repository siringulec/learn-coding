#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// #define DATE_SIZE 20

// void time_conversion()
// {
//     int hh, mm, ss ;
//     char t12[3];
//     printf("Lutfen belirlene formatta tarih bilgisini giriniz :");
//     scanf("%d:%d:%d%s", &hh, &mm, &ss, t12) ;   
//     if (strcmp(t12,"PM")==0 && hh!=12) hh += 12 ;
//     if (strcmp(t12,"AM")==0 && hh==12) hh = 0 ;
        
//     printf("%02d:%02d:%02d\n", hh, mm, ss) ;
// }

// int sirinLength(char *karakter_dizisi) {
//     int length = 0;
    
//     while(karakter_dizisi[length] != '\0')
//         length++;

//     return length;
// }

// int sirinStringToInt(char *karakter_dizisi) {
//     int sonuc = 0, length = 0;

//     return sonuc; 
// }

int main(int argc, char const *argv[])
{
    if(argc != 2) {
        printf("Parola girilmedi!!!\n");
        return -1;
    }

    if(!strcmp("dost", argv[1]))
        printf("Hosgeldiniz efendiler ...\n");
    else {
        printf("You shall not pass !!!!!\n");
        return -2;
    }
        
    //     int sirin_length;
    // char *sirin;

    // printf("Kaç karakterli bir dizi alanı açmk istiyorsunuz :");
    // scanf("%d", &sirin_length);

    // sirin = (char*) malloc(sizeof(char) * sirin_length);
    // if(sirin == NULL){
    //     printf("Error memory allocation...");
    //     return -1;
    // }

    // printf("Lutfen bir karakter dizisi giriniz :");
    
    return 0;
}
