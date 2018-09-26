//
// Created by Daria Miklashevskaya on 26/09/2018.
//

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int main(){
    int pid = fork();

    if (pid==0){
        while(1) {
            sleep(1);
            printf("I am alive!\n");
        }
    }

    sleep(10);
    kill(pid, SIGTERM);
}