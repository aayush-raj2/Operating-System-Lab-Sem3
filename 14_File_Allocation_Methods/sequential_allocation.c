#include <stdio.h>

int main() {
    int n, start[10], length[10];

    printf("Enter number of files: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter starting block of file %d: ", i + 1);
        scanf("%d", &start[i]);

        printf("Enter length of file %d: ", i + 1);
        scanf("%d", &length[i]);
    }

    printf("\nFile No\tStart Block\tLength\tBlocks Allocated\n");

    for (int i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t%d\t", i + 1, start[i], length[i]);
        for (int j = 0; j < length[i]; j++) {
            printf("%d ", start[i] + j);
        }
        printf("\n");
    }

    return 0;
}
/*
🔢 Sample Input
Enter number of files: 2
Enter starting block of file 1: 5
Enter length of file 1: 3
Enter starting block of file 2: 10
Enter length of file 2: 4

📤 Sample Output
File No Start Block Length Blocks Allocated
1       5           3      5 6 7
2       10          4      10 11 12 13 */
