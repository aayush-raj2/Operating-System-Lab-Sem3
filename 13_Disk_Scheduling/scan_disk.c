#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}

int main() {
    int n, head, disk, total = 0, dir;

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

    printf("Enter direction (0 = left, 1 = right): ");
    scanf("%d", &dir);

    sort(req, n);

    int pos;
    for (pos = 0; pos < n; pos++)
        if (req[pos] > head) break;

    if (dir == 1) {
        for (int i = pos; i < n; i++)
            total += abs(head - req[i]), head = req[i];

        total += abs(head - (disk - 1));
        head = disk - 1;

        for (int i = pos - 1; i >= 0; i--)
            total += abs(head - req[i]), head = req[i];
    }

    printf("\nTotal Head Movement = %d\n", total);
    return 0;
}
/*🔹 Sample Output
Total Head Movement = 236*/
