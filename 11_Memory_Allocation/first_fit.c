#include <stdio.h>

int main() {
    int blocks[20], processes[20], allocation[20];
    int nb, np;

    printf("Enter number of memory blocks: ");
    scanf("%d", &nb);

    printf("Enter block sizes:\n");
    for (int i = 0; i < nb; i++) scanf("%d", &blocks[i]);

    printf("Enter number of processes: ");
    scanf("%d", &np);

    printf("Enter process sizes:\n");
    for (int i = 0; i < np; i++) scanf("%d", &processes[i]);

    for (int i = 0; i < np; i++) allocation[i] = -1;

    for (int i = 0; i < np; i++) {
        for (int j = 0; j < nb; j++) {
            if (blocks[j] >= processes[i]) {
                allocation[i] = j;
                blocks[j] -= processes[i];
                break;
            }
        }
    }

    printf("\nProcess No.\tProcess Size\tBlock Allocated\n");
    for (int i = 0; i < np; i++) {
        printf("%d\t\t%d\t\t", i+1, processes[i]);
        if (allocation[i] != -1)
            printf("%d\n", allocation[i] + 1);
        else
            printf("Not Allocated\n");
    }

    return 0;
}
