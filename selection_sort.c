#include <stdio.h>
#define MAX_LENGTH 100

void print_array(int, int*, char*);

int main() {
    // Selection sort implementaton
    int i, j, tmp, n, min_index, A[MAX_LENGTH];

    // Dizinin eleman sayisini okuma
    printf("Lütfen dizinin eleman sayısını giriniz :");
    scanf("%d", &n);

    // Dizinin elemanlarını okuma
    for(i=0; i < n; i++) {
        printf("%d. elemanı giriniz :", i+1);
        scanf("%d", &A[i]);
    }

    // Dizinin ilk halini ekrana bas
    print_array(n, A, "Dizinin İlk Hali");

    // Sort kısmı
    for(i=0; i < n -1; i++) {
        min_index = i;
        for(j=i+1; j < n; j++) {
            if (A[min_index] > A[j]) {
                min_index = j;
            }
        }

        tmp = A[i];
        A[i] = A[min_index];
        A[min_index] = tmp;
    }

    // Dizinin son halini ekrana bas
    print_array(n, A, "Dizinin Son Hali");

    return 0;
}


void print_array(int length ,int *array, char *message) {
    int i;
    printf("---- %s ----\n", message);
    for(i=0; i < length; i++) {
        printf("%d\t", array[i]);
    }
    printf("\n");
}
