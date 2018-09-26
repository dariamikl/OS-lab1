//
// Created by Daria Miklashevskaya on 26/09/2018.
//
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

int main() {
    int wait_id1, wait_id2;
    pid_t pid1, pid2;
    int i, tmp;
    int fd[2];
    pipe(fd);
    pid1 = fork();


    if (pid1 == 0) {
        printf("Child 1 has started\n");
        read(fd[0], &tmp, sizeof(tmp));
        printf("Got %d\n", tmp);
        kill(tmp, SIGSTOP);
        printf("Child 2 is killed.");
        return EXIT_SUCCESS;
    } else {
        pid2 = fork();
        if (pid2 == 0) {
            printf("Child 2 has started\n");
            while (1) {
                printf("I'm alive.\n");
                sleep(1);
            }

        } else {
            printf("Parent process has started\n");
            printf("pid1 %d\n", pid1);
            printf("pid2 %d\n", pid2);
            write(fd[1], &pid2, sizeof(pid2));
            waitpid(pid2, 0, 0);

        }

    }

}