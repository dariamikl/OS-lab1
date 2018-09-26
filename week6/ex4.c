//
// Created by Daria Miklashevskaya on 26/09/2018.
//

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void sigint_handler(int num){
    if (num==SIGINT)
    printf("\nSIGINT RECEIVED :) (%d) \n", num);


}

void sigkill_handler(int num){

    if (num==SIGKILL)
        printf("\nSIGKILL RECEIVED :) (%d) \n", num);


}
void sigstop_handler(int num){

    if (num==SIGSTOP)
        printf("\nSIGSTOP RECEIVED :) (%d) \n", num);


}
void sigusr1_handler(int num){

    if (num==SIGUSR1)
        printf("\nSIGUSR1 RECEIVED :) (%d) \n", num);
    exit(0);

}

int main(){

    signal(SIGINT, sigint_handler);
    signal(SIGKILL, sigkill_handler);
    signal(SIGSTOP, sigstop_handler);
    signal(SIGUSR1, sigusr1_handler);

    while(1){
        sleep(7);
    }


}