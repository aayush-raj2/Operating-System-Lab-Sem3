#include <stdio.h>

int main() {
    int frames[20], pages[50];
    int nf, np, i, j, k, hit = 0, faults = 0;

    printf("Enter number of frames: ");
    scanf("%d", &nf);

    printf("Enter number of pages: ");
    scanf("%d", &np);

    printf("Enter page reference string:\n");
    for (i = 0; i < np; i++) scanf("%d", &pages[i]);

    for (i = 0; i < nf; i++) frames[i] = -1;

    j = 0;
    for (i = 0; i < np; i++) {
        hit = 0;

        for (k = 0; k < nf; k++) {
            if (frames[k] == pages[i]) {
                hit = 1;
                break;
            }
        }

        if (!hit) {
            frames[j] = pages[i];
            j = (j + 1) % nf;
            faults++;
        }
    }

    printf("\nTotal Page Faults (FIFO) = %d\n", faults);

    return 0;
}
