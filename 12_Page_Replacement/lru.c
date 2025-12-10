#include <stdio.h>

int main() {
    int frames[20], pages[50], last_used[20];
    int nf, np, i, j, k, hit, faults = 0, time = 0;

    printf("Enter number of frames: ");
    scanf("%d", &nf);

    printf("Enter number of pages: ");
    scanf("%d", &np);

    printf("Enter page reference string:\n");
    for (i = 0; i < np; i++) scanf("%d", &pages[i]);

    for (i = 0; i < nf; i++) {
        frames[i] = -1;
        last_used[i] = -1;
    }

    for (i = 0; i < np; i++) {
        hit = 0;

        for (j = 0; j < nf; j++) {
            if (frames[j] == pages[i]) {
                hit = 1;
                last_used[j] = time++;
                break;
            }
        }

        if (!hit) {
            int lru_index = 0;

            for (j = 1; j < nf; j++) {
                if (last_used[j] < last_used[lru_index]) {
                    lru_index = j;
                }
            }

            frames[lru_index] = pages[i];
            last_used[lru_index] = time++;
            faults++;
        }
    }

    printf("\nTotal Page Faults (LRU) = %d\n", faults);

    return 0;
}
