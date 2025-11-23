#include <stdio.h>

int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    int bt[n], pr[n], pid[n], wt[n], tat[n];

    for (int i = 0; i < n; i++) {
        pid[i] = i+1;
        scanf("%d %d", &bt[i], &pr[i]);
    }

    // sort by priority
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (pr[j] < pr[i]) {
                int t=pr[i]; pr[i]=pr[j]; pr[j]=t;
                int b=bt[i]; bt[i]=bt[j]; bt[j]=b;
                int p=pid[i]; pid[i]=pid[j]; pid[j]=p;
            }

    wt[0] = 0;
    for (int i = 1; i < n; i++)
        wt[i] = wt[i-1] + bt[i-1];

    for (int i = 0; i < n; i++)
        tat[i] = wt[i] + bt[i];

    printf("PID BT PR WT TAT\n");
    float aw=0, at=0;

    for (int i = 0; i < n; i++) {
        printf("%d  %d  %d  %d  %d\n", pid[i], bt[i], pr[i], wt[i], tat[i]);
        aw += wt[i]; at += tat[i];
    }

    printf("\nAverage WT = %.2f\nAverage TAT = %.2f\n", aw/n, at/n);
}
