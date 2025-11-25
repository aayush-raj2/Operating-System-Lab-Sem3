#include <stdio.h>

int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    int bt[n], pr[n], rem[n], wt[n], tat[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &bt[i], &pr[i]);
        rem[i] = bt[i];
        wt[i] = 0;
    }

    int completed = 0, t = 0;

    while (completed != n) {
        int idx = -1, best_priority = 99999;

        for (int i = 0; i < n; i++)
            if (rem[i] > 0 && pr[i] < best_priority) {
                best_priority = pr[i];
                idx = i;
            }

        rem[idx]--;
        t++;

        if (rem[idx] == 0) {
            completed++;
            tat[idx] = t;
            wt[idx] = tat[idx] - bt[idx];
        }
    }

    printf("\nPID BT PR WT TAT\n");
    float aw=0, at=0;

    for (int i = 0; i < n; i++) {
        printf("%d  %d  %d  %d  %d\n", i+1, bt[i], pr[i], wt[i], tat[i]);
        aw+=wt[i]; at+=tat[i];
    }

    printf("\nAverage WT = %.2f\nAverage TAT = %.2f\n", aw/n, at/n);
}
