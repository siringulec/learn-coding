#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    // Değişkenleri tanımla
    int n, i, isDivided, divider, start_number;
  

    // Kullanıcıdan  n değerini oku
    printf("Lütfen istediğiniz asal sayı sayısını giriniz :");
    scanf("%d", &n);
    
    
    i =  0; 
    start_number = 2;
    while(i < n){
        isDivided = 0;
        divider = 2;
        while(isDivided == 0 && (double)divider < sqrt((double)start_number)){
            if(start_number%divider == 0){
                isDivided = 1;
            }
            else{
                divider += 1;
            }  
        }
        if(isDivided == 0){
            printf("%d\n", start_number);
            i += 1;
        }
        start_number += 1;  

    }
    return 0;
}
