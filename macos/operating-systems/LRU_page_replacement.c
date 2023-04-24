#include <stdio.h>

int main() {
    int n, ref[100], frames, counter = 0, page_faults = 0;
    printf("Enter no of virtual pages:");
    scanf("%d", &n);
    printf("Enter the reference string (virtual page numbers): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ref[i]);
    }
    printf("Enter no of page frames: ");
    scanf("%d", &frames);
    int page_table[frames][2];
    for (int i = 0; i < frames; i++) {
        page_table[i][0] = -1;
        page_table[i][1] = -1;
    }
    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < frames; j++) {
            if (page_table[j][0] == ref[i]) {
                page_table[j][1] = counter;
                found = 1;
                break;
            }
        }
        if (!found) {
            int lru_index = 0, lru_counter = page_table[0][1];
            for (int j = 1; j < frames; j++) {
                if (page_table[j][1] < lru_counter) {
                    lru_index = j;
                    lru_counter = page_table[j][1];
                }
            }
            page_table[lru_index][0] = ref[i];
            page_table[lru_index][1] = counter;
            page_faults++;
        }
        printf("%d %d %d\n", page_table[0][0], page_table[1][0], page_table[2][0]);
        counter++;
    }
    printf("The no of page faults is %d\n", page_faults);
    return 0;
}
