#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, head, total = 0;

    printf("Enter number of disk requests: ");
    scanf("%d", &n);

    int req[n];
    printf("Enter request sequence:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &req[i]);

    printf("Enter initial head position: ");
    scanf("%d", &head);

    total += abs(head - req[0]);

    for (int i = 1; i < n; i++)
        total += abs(req[i] - req[i - 1]);

    printf("\nTotal Head Movement = %d\n", total);

    return 0;
}
