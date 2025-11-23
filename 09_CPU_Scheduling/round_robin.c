#include <stdio.h>

int main() {
    int n, tq;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    int bt[n], rem[n], wt[n], tat[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &bt[i]);
        rem[i] = bt[i];
        wt[i] = 0;
    }

    printf("Enter Time Quantum: ");
    scanf("%d", &tq);

    int t = 0;

    while (1) {
        int done = 1;

        for (int i = 0; i < n; i++) {
            if (rem[i] > 0) {
                done = 0;

                if (rem[i] > tq) {
                    t += tq;
                    rem[i] -= tq;
                } else {
                    t += rem[i];
                    wt[i] = t - bt[i];
                    rem[i] = 0;
                }
            }
        }
        if (done) break;
    }

    for (int i = 0; i < n; i++)
        tat[i] = wt[i] + bt[i];

    printf("PID BT WT TAT\n");
    float aw=0, at=0;

    for (int i = 0; i < n; i++) {
        printf("%d %d %d %d\n", i+1, bt[i], wt[i], tat[i]);
        aw+=wt[i]; at+=tat[i];
    }

    printf("\nAverage WT = %.2f\nAverage TAT = %.2f\n", aw/n, at/n);
}
