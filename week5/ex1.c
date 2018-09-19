//
// Created by Daria Miklashevskaya on 19/09/2018.
//
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_THREAD_NUM 13

void *threadFunc(void *arg){
    printf("Hello :) I am thread number %d\n",*(int *) arg);
}
int parallel_threads(pthread_t threads[]);
int sequential_threads(pthread_t threads[]);

int main()
{
    pthread_t threads[MAX_THREAD_NUM];
    parallel_threads(&threads);
    //sequential_threads(&threads);

}
int parallel_threads(pthread_t threads[]){

    int i;
    for (int i = 0; i< MAX_THREAD_NUM; i++){
        pthread_create(&threads[i], NULL, threadFunc, &i);
        printf("Thread number %d created\n",i );


    }
    for (int i = 0; i< MAX_THREAD_NUM; i++){
        pthread_join(threads[i], NULL);

    }
    pthread_exit(NULL);
}
int sequential_threads(pthread_t threads[]){
    int i;
    for (int i = 0; i< MAX_THREAD_NUM; i++) {
        pthread_create(&threads[i], NULL, threadFunc, &i);
        printf("Thread number %d created\n", i);
        pthread_join(threads[i], NULL);


    }
    pthread_exit(NULL);
}


