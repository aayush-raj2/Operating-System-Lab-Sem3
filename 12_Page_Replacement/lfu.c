#include <stdio.h>

int main() {
    int frames[20], freq[20], pages[50];
    int nf, np, i, j, hit, faults = 0, time = 0, age[20];

    printf("Enter number of frames: ");
    scanf("%d", &nf);

    printf("Enter number of pages: ");
    scanf("%d", &np);

    printf("Enter page reference string:\n");
    for (i = 0; i < np; i++) scanf("%d", &pages[i]);

    for (i = 0; i < nf; i++) {
        frames[i] = -1;
        freq[i] = 0;
        age[i] = 0;
    }

    for (i = 0; i < np; i++) {
        hit = 0;

        for (j = 0; j < nf; j++) {
            if (frames[j] == pages[i]) {
                hit = 1;
                freq[j]++;
                age[j] = time++;
                break;
            }
        }

        if (!hit) {
            int lfu_index = 0;

            for (j = 1; j < nf; j++) {
                if (freq[j] < freq[lfu_index] ||
                   (freq[j] == freq[lfu_index] && age[j] < age[lfu_index])) {
                    lfu_index = j;
                }
            }

            frames[lfu_index] = pages[i];
            freq[lfu_index] = 1;
            age[lfu_index] = time++;
            faults++;
        }
    }

    printf("\nTotal Page Faults (LFU) = %d\n", faults);

    return 0;
}
