//
// Created by Daria Miklashevskaya on 26/09/2018.
//

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void handler(int num){

   printf("\nSIGINT RECEIVED :) (%d) \n", num);

}

int main(){

    signal(SIGINT, handler);
    while(1){
        sleep(7);
    }

}