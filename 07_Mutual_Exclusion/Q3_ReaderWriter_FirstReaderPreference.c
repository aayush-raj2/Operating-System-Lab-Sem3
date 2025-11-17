// Q3_ReaderWriter_FirstReaderPreference.c
// Author: Aayush Raj
// Description: Reader–Writer Problem (First Reader Preference) using pthread + semaphore

#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <unistd.h>

/*
This program implements the First Readers Preference solution.
Multiple readers can read simultaneously, but writers get access only
when no reader is currently reading.
*/

sem_t wrt;
pthread_mutex_t mutex;
int cnt = 1;
int numreader = 0;

void *writer(void *wno)
{
    sem_wait(&wrt); // writer wants exclusive access

    cnt = cnt * 2;
    printf("Writer %d modified cnt to %d\n", *((int *)wno), cnt);

    sem_post(&wrt); // writer done
}

void *reader(void *rno)
{
    // Acquire lock before updating number of readers
    pthread_mutex_lock(&mutex);
    numreader++;

    if (numreader == 1)
        sem_wait(&wrt); // first reader locks writer

    pthread_mutex_unlock(&mutex);

    // Reading section
    printf("Reader %d: read cnt as %d\n", *((int *)rno), cnt);

    // Reader leaving section
    pthread_mutex_lock(&mutex);
    numreader--;

    if (numreader == 0)
        sem_post(&wrt); // last reader wakes writer

    pthread_mutex_unlock(&mutex);
}

int main()
{
    pthread_t readthreads[10], writethreads[5];
    int a[10] = {1,2,3,4,5,6,7,8,9,10}; // identifiers

    pthread_mutex_init(&mutex, NULL);
    sem_init(&wrt, 0, 1);

    // 10 Readers
    for (int i = 0; i < 10; i++)
        pthread_create(&readthreads[i], NULL, reader, (void *)&a[i]);

    // 5 Writers
    for (int i = 0; i < 5; i++)
        pthread_create(&writethreads[i], NULL, writer, (void *)&a[i]);

    // Join Readers
    for (int i = 0; i < 10; i++)
        pthread_join(readthreads[i], NULL);

    // Join Writers
    for (int i = 0; i < 5; i++)
        pthread_join(writethreads[i], NULL);

    pthread_mutex_destroy(&mutex);
    sem_destroy(&wrt);

    return 0;
}

/*
📌 Sample Output (Varies due to concurrency):

Reader 1: read cnt as 1
Reader 2: read cnt as 1
Reader 3: read cnt as 1
...
Writer 1 modified cnt to 2
Reader 4: read cnt as 2
Reader 5: read cnt as 2
Writer 2 modified cnt to 4
...

Explanation:
✔ Many readers read simultaneously
✔ Writer waits until all readers finish
✔ Ensures FIRST READER PRIORITY

*/
