// Q2_POSIX_Semaphore_SharedVariable.c
// Author: Aayush Raj
// Description: Thread synchronization using POSIX semaphore

#include <pthread.h>
#include <stdio.h>
#include <semaphore.h>
#include <unistd.h>

void *fun1();
void *fun2();

int shared = 1;       // shared variable
sem_t s;              // semaphore variable

int main() {
    pthread_t thread1, thread2;

    // initialize semaphore: (sem var, shared b/w threads(0), initial value=1)
    sem_init(&s, 0, 1);

    pthread_create(&thread1, NULL, fun1, NULL);
    sleep(1);
    pthread_create(&thread2, NULL, fun2, NULL);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Final value of shared is %d\n", shared);
    return 0;
}

void *fun1() {
    int x;

    sem_wait(&s);
    x = shared;
    printf("Thread1 reads the value as %d\n", x);
    x++;
    printf("Local updation by Thread1: %d\n", x);
    sleep(1);
    shared = x;
    printf("Value of shared updated by Thread1 is: %d\n", shared);
    sem_post(&s);
}

void *fun2() {
    int y;

    sem_wait(&s);
    y = shared;
    printf("Thread2 reads the value as %d\n", y);
    y--;
    printf("Local updation by Thread2: %d\n", y);
    sleep(1);
    shared = y;
    printf("Value of shared updated by Thread2 is: %d\n", shared);
    sem_post(&s);
}

/*
Expected Output (Approx):

Thread1 reads the value as 1
Local updation by Thread1: 2
Value of shared updated by Thread1 is: 2
Thread2 reads the value as 2
Local updation by Thread2: 1
Value of shared updated by Thread2 is: 1
Final value of shared is 1
*/
