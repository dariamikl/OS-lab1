//
// Created by Daria Miklashevskaya on 12/09/2018.
//

#include <stdio.h>
#include <unistd.h>

int main(){
    int n = 1010101;
    int pid;
    pid = fork();
    if (pid==0)
        printf("Hello from child [%d - %d]\n", pid, n);
    else if (pid>0)
        printf("Hello from parent [%d - %d]\n", pid, n);
    else {
        printf("Error");
        return 1;
    }
    return 0;

}