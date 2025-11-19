// dining_philosophers.c
// Author: Aayush Raj
// Description: Dining Philosophers using POSIX threads and semaphores.
//              Deadlock avoided by limiting concurrent hungry philosophers (room semaphore).

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define N 5

sem_t room;              // limits number of philosophers trying to pick chopsticks
sem_t chopstick[N];

void *philosopher(void *num);
void think(int phil);
void eat(int phil);

void think(int phil) {
    // Simulate thinking
    // printf("Philosopher %d is thinking\n", phil);
    usleep(100000 * (rand() % 3 + 1)); // 0.1 - 0.3s
}

void eat(int phil) {
    printf("Philosopher %d is eating\n", phil);
    fflush(stdout);
    usleep(150000 * (rand() % 3 + 1)); // 0.15 - 0.45s
}

void *philosopher(void *num) {
    int phil = *(int *)num;
    int left = phil;
    int right = (phil + 1) % N;

    // For this lab program do one think-eat cycle each philosopher.
    // You may change to loop for repeated cycles.
    think(phil);

    // Enter room — limit concurrency to N-1 (here 4)
    sem_wait(&room);

    // pick left chopstick
    sem_wait(&chopstick[left]);

    // pick right chopstick
    sem_wait(&chopstick[right]);

    // critical section (eating)
    eat(phil);

    // put down right then left
    sem_post(&chopstick[right]);
    sem_post(&chopstick[left]);

    // leave room
    sem_post(&room);

    return NULL;
}

int main() {
    pthread_t tid[N];
    int a[N];
    srand((unsigned)time(NULL));

    // Initialize room to N-1 to prevent deadlock
    sem_init(&room, 0, N - 1);

    for (int i = 0; i < N; i++) {
        sem_init(&chopstick[i], 0, 1);
    }

    for (int i = 0; i < N; i++) {
        a[i] = i;
        if (pthread_create(&tid[i], NULL, philosopher, (void *)&a[i]) != 0) {
            perror("pthread_create");
            exit(1);
        }
    }

    for (int i = 0; i < N; i++) {
        pthread_join(tid[i], NULL);
    }

    // Cleanup
    for (int i = 0; i < N; i++) {
        sem_destroy(&chopstick[i]);
    }
    sem_destroy(&room);

    return 0;
}
