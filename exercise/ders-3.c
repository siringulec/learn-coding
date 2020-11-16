#include <stdio.h>
#define LENGTH 100

int topla(int count, int *list) {
  int i;
  int sum = list[0];
  
  for(i=1; i < count; i++) {
    printf("%d elimde var şimdi ona %d eklicem\n", sum, list[i]);
    sum = sum + list[i];
  }

  return sum;
}


int main(int argc, char *argv[]) {
  int boyut, i;
  int dizi[LENGTH];

  printf("Lutfen dizi boyutunu giriniz :");
  scanf("%d", &boyut);

  for(i=0; i < boyut; i++) {
    printf("%d nolu elemanı giriniz :", i+1);
    scanf("%d", &dizi[i]);
  }

  printf("Toplam :%d\n", topla(boyut, dizi));
  

  return 0;
}
