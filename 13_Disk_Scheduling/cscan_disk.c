#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1]) {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
}

int main() {
    int n, head, disk, total = 0;

    printf("Enter number of disk requests: ");
    scanf("%d", &n);

    int req[n];
    printf("Enter request sequence:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &req[i]);

    printf("Enter initial head position: ");
    scanf("%d", &head);

    printf("Enter disk size: ");
    scanf("%d", &disk);

    sort(req, n);

    int pos;
    for (pos = 0; pos < n; pos++)
        if (req[pos] > head) break;

    for (int i = pos; i < n; i++)
        total += abs(head - req[i]), head = req[i];

    total += abs(head - (disk - 1));
    total += disk - 1;

    head = 0;

    for (int i = 0; i < pos; i++)
        total += abs(head - req[i]), head = req[i];

    printf("\nTotal Head Movement = %d\n", total);
    return 0;
}
/*
🔹 Sample Output
Total Head Movement = 382
*/
