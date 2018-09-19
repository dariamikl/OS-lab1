//
// Created by Daria Miklashevskaya on 19/09/2018.
//

#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#define EATING 1
#define THINKING 2
#define NUM_OF_PHILS 5

sem_t mutex;

int statuses[NUM_OF_PHILS], signals[NUM_OF_PHILS];

void eat(int number){
    sem_wait(&mutex);
    state[number] = -1;
    sem_post(&mutex);
    sem_wait(&signals[number]);


}


void* philosopher(void* arg){
    while(1){
        eat(*arg);
        think(*arg);
    }
}
int main(){
    int i;
    pthread_t thread[NUM_OF_PHILS];

    sem_init(&mutex, 0, 1);

    for (i=0; i<NUM_OF_PHILS; i++) {
        sem_init(&S[i], 0, 0);
    }
    for (i=0; i<NUM_OF_PHILS; i++) {
        pthread_create(&thread[i], NULL, philosopher, &philosophers[i]);
        printf("Plilosopher %d: thinking\n", i);
    }
    for (i=0; i<NUM_OF_PHILS; i++) {
        pthread_join(thread[i], NULL);
    }



}