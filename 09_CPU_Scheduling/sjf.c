// sjf.c
// Author: Aayush Raj
// Description: SJF (Non–Preemptive) Scheduling Algorithm

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    int bt[n], p[n], wt[n], tat[n];

    printf("Enter burst times:\n");
    for (int i = 0; i < n; i++) {
        printf("P%d: ", i + 1);
        scanf("%d", &bt[i]);
        p[i] = i + 1;
    }

    // Sort by burst time (simple selection sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (bt[j] < bt[i]) {
                int temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;

                int tempP = p[i];
                p[i] = p[j];
                p[j] = tempP;
            }
        }
    }

    wt[0] = 0;
    for (int i = 1; i < n; i++)
        wt[i] = wt[i - 1] + bt[i - 1];

    for (int i = 0; i < n; i++)
        tat[i] = wt[i] + bt[i];

    float avgWT = 0, avgTAT = 0;
    for (int i = 0; i < n; i++) {
        avgWT += wt[i];
        avgTAT += tat[i];
    }

    avgWT /= n;
    avgTAT /= n;

    printf("\nProcess\tBT\tWT\tTAT");
    for (int i = 0; i < n; i++)
        printf("\nP%d\t%d\t%d\t%d", p[i], bt[i], wt[i], tat[i]);

    printf("\n\nAverage Waiting Time: %.2f", avgWT);
    printf("\nAverage Turnaround Time: %.2f\n", avgTAT);

    return 0;
}

/*
=== SJF OUTPUT SAMPLE ===
Process BT WT TAT
P2      3  0  3
P1      5  3  8
P3      8  8  16

Average Waiting Time: 3.67
Average Turnaround Time: 9.00 */
