// fcfs.c
// Author: Aayush Raj
// Description: FCFS Scheduling Algorithm

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    int bt[n], wt[n], tat[n];
    
    printf("Enter burst times:\n");
    for (int i = 0; i < n; i++) {
        printf("P%d: ", i + 1);
        scanf("%d", &bt[i]);
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
        printf("\nP%d\t%d\t%d\t%d", i + 1, bt[i], wt[i], tat[i]);

    printf("\n\nAverage Waiting Time: %.2f", avgWT);
    printf("\nAverage Turnaround Time: %.2f\n", avgTAT);

    return 0;
}
/*
=== FCFS OUTPUT SAMPLE ===
Process BT WT TAT
P1      5  0  5
P2      3  5  8
P3      8  8  16

Average Waiting Time: 4.33
Average Turnaround Time: 9.67 */
