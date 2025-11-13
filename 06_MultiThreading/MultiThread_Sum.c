// MultiThread_Sum.c
// Author: Aayush Raj
// Description: Creates 3 threads to calculate sums of even, odd, and natural numbers.

#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

#define NUM_THREADS 3
int evensum = 0, oddsum = 0, sumn = 0;
int evenarr[50], oddarr[50];
int je = 0, jo = 0;

// Thread function to calculate even numbers
void *Even(void *arg) {
    int n = (int)(size_t)arg;
    je = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            evenarr[je] = i;
            evensum += i;
            je++;
        }
    }
    pthread_exit(NULL);
}

// Thread function to calculate odd numbers
void *Odd(void *arg) {
    int n = (int)(size_t)arg;
    jo = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            oddarr[jo] = i;
            oddsum += i;
            jo++;
        }
    }
    pthread_exit(NULL);
}

// Thread function to calculate sum of natural numbers
void *SumN(void *arg) {
    int n = (int)(size_t)arg;
    for (int i = 1; i <= n; i++)
        sumn += i;
    pthread_exit(NULL);
}

int main() {
    pthread_t threads[NUM_THREADS];
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Thread creation
    pthread_create(&threads[0], NULL, Even, (void *)(size_t)n);
    pthread_create(&threads[1], NULL, Odd, (void *)(size_t)n);
    pthread_create(&threads[2], NULL, SumN, (void *)(size_t)n);

    // Wait for all threads to finish
    for (int i = 0; i < NUM_THREADS; i++)
        pthread_join(threads[i], NULL);

    // Display results
    printf("\n🔹 The sum of first %d natural numbers: %d\n", n, sumn);
    printf("🔹 The sum of first %d even numbers: %d\n", n, evensum);
    printf("🔹 The sum of first %d odd numbers: %d\n", n, oddsum);

    printf("\n📘 Even Numbers: ");
    for (int i = 0; i < je; i++)
        printf("%d ", evenarr[i]);

    printf("\n📗 Odd Numbers: ");
    for (int i = 0; i < jo; i++)
        printf("%d ", oddarr[i]);

    printf("\n✅ Program executed successfully using 3 threads.\n");
    pthread_exit(NULL);
}

/*
🖥️ Sample Output:

Enter a number: 10

🔹 The sum of first 10 natural numbers: 55
🔹 The sum of first 10 even numbers: 30
🔹 The sum of first 10 odd numbers: 25

📘 Even Numbers: 2 4 6 8 10
📗 Odd Numbers: 1 3 5 7 9
✅ Program executed successfully using 3 threads.
*/
