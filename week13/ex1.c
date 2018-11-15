//
// Created by Daria Miklashevskaya on 15/11/2018.
//
#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 3
#define TRUE 1
#define FALSE 0
void find_deadlock(int finish []){
    for (int i=0; i<N; i++){
        if (finish[i]==FALSE) {
            printf("Process %d is deadlocked", i);
            return;
        }

    }

    printf("No deadlock detected");
}
int compare(int a[], int b[]){
    for (int i=0; i<M; i++){
        if (a[i]>b[i]) return 1;
    }
    return 2;
}

void find_index(int request[N][M],int work[M], int finish[M], int allocation[N][M]){
    int index = -1;
    for (int i=0; i<N; i++){
        if (compare(request[i], work) && (finish[i]==FALSE)) index=i;
    }
    if (index==-1){
        find_deadlock(finish);
        return;
    }
    else {

        for (int i=0;i<M;i++){
            work[i] = work[i]+allocation[index][i];
            finish[i]=TRUE;
            find_index(request, work, finish, allocation);

        }





    };

}


int main(){
    int existing [3] = {7, 2, 6};
    int available [3] = {0,0,0};
    int allocation [5][3] = {{0,1,0}, {2, 0, 0}, {3, 0, 3}, {2, 1, 1}, {0, 2, 2}};
    int request [5][3] = {{0,0,0}, {2, 0, 2}, {0, 0, 0}, {1, 0, 0}, {0, 0, 2}};
    int work [3] = {0,0,0};
    int finish [5] = {FALSE, FALSE, FALSE, FALSE};
    int index = -1;





    for (int i =0; i<M; i++){
        work[i] = available[i];
    }
    for (int i=0; i<N; i++){
        if (allocation[i]==0) finish[i]=TRUE;else finish[i]=FALSE;

    }

    find_index(request, work, finish, allocation);


}