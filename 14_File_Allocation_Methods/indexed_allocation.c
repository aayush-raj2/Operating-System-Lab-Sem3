#include <stdio.h>

int main() {
    int n, indexBlock[10], blocks[10][10], length[10];

    printf("Enter number of files: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter index block of file %d: ", i + 1);
        scanf("%d", &indexBlock[i]);

        printf("Enter number of blocks for file %d: ", i + 1);
        scanf("%d", &length[i]);

        printf("Enter block numbers:\n");
        for (int j = 0; j < length[i]; j++) {
            scanf("%d", &blocks[i][j]);
        }
    }

    printf("\nFile No\tIndex Block\tBlocks Allocated\n");

    for (int i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t", i + 1, indexBlock[i]);
        for (int j = 0; j < length[i]; j++) {
            printf("%d ", blocks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*
🔢 Sample Input
Enter number of files: 1
Enter index block of file 1: 50
Enter number of blocks for file 1: 4
Enter block numbers:
5 9 13 21

📤 Sample Output
File No Index Block Blocks Allocated
1       50          5 9 13 21
*/
