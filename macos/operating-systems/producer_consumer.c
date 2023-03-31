#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
#include <time.h>

#define BUFFER_SIZE 10

int buffer[BUFFER_SIZE];
int count = 0;
int in = 0;
int out = 0;

sem_t mutex;
sem_t empty;
sem_t full;

void *producer(void *x)
{
    int item;
    srand (time(NULL));
    while (1) {
        item = rand()%100;
        sem_wait(&empty);
        sem_wait(&mutex);
        buffer[in] = item;
        in = (in + 1) % BUFFER_SIZE;
        count++;
        printf("Producer produced item %d\n", item);
        printf("Buffer status: [ ");
        for (int i = 0; i < BUFFER_SIZE; i++) {
            printf("%d ", buffer[i]);
        }
        printf("]\n");
        sem_post(&mutex);
        sem_post(&full);
        sleep(rand() % 91 + 10);
    }
}

void *consumer(void *x)
{
    int item;
    srand (time(NULL));
    while (1) {
        sem_wait(&full);
        sem_wait(&mutex);
        item = buffer[out];
        out = (out + 1) % BUFFER_SIZE;
        count--;
        printf("Consumer consumed item %d\n", item);
        printf("Buffer status: [ ");
        for (int i = 0; i < BUFFER_SIZE; i++) {
            printf("%d ", buffer[i]);
        }
        printf("]\n");
        sem_post(&mutex);
        sem_post(&empty);
        sleep(rand() % 91 + 10);
    }
}

int main()
{

   // used sem_open to initialize
    // because macOS doesn't support POSIX unnamed semaphores
    sem_t *emptyP = sem_open("empty", O_CREAT, 0644, BUFFER_SIZE);
    if (emptyP == SEM_FAILED) {
        perror("Failed to open semphore for empty");
        exit(-1);
    }
    sem_t *mutexP = sem_open("mutex", O_CREAT, 0644, 1);
    if (mutexP == SEM_FAILED) {
        sem_close(mutexP);
        perror("Failed to open semphore for mutex");
        exit(-1);
    }
    sem_t *fullP = sem_open("full", O_CREAT, 0644, 0);
    if (fullP == SEM_FAILED) {
        sem_close(fullP);
        perror("Failed to open semphore for full");
        exit(-1);
    }
    // alternatively
    // sem_init(&empty, 0, BUFFER_SIZE);
    // sem_init(&mutex, 0, 1);
    // sem_init(&full, 0, 0);
    // can be used to initialize

    pthread_t producer_thread, consumer_thread;
    pthread_create(&producer_thread, NULL, producer, NULL);
    pthread_create(&consumer_thread, NULL, consumer, NULL);
    pthread_join(producer_thread, NULL);
    pthread_join(consumer_thread, NULL);
    sem_unlink("mutex");
    sem_unlink("empty");
    sem_unlink("full");

    return 0;
}
