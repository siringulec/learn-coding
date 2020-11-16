#include <stdio.h>

int main() {
    char name[100], choice, dummy;
    int sayi1, sayi2, toplam;
    
    printf("Merhaba, isminizi ogrenebilir miyim lutfen :");
    scanf("%s", name);
    printf("Hosgeldin %s\n", name);

    scanf("%c", &dummy);
    
    printf("Toplama islemi yapmak ister misin (y, n) :");
    scanf("%c", &choice);
    scanf("%c", &dummy);

    if(choice == 'y') {
        printf("Mukemmel bize hemen arasında bosluk olucak şekilde iki sayi girer misin :");
        scanf("%d %d", &sayi1, &sayi2);
        toplam = sayi1 + sayi2;
        printf("Girdigin bu mükemmel sayıların toplamı : %d\n", toplam);
        printf("Gule gule :D\n");
    } else {
        printf("Sen bilirsin ne haalin varsa gör\n");
        printf("Gulmeye gulmeye :\'(\n");
    }

    return 0;
}
