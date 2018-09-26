//
// Created by Daria Miklashevskaya on 26/09/2018.
//

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>


void pipe_handler(){
    int fd[2];
    pid_t pid1, pid2;
    pipe(fd);
    pid1 = fork();
    if (pid1!=0){
        pid2=fork();

        if (pid2==0){
            close(fd[1]);
            dup2(fd[0], STDIN_FILENO);
            close(fd[0]);
            execvp(pipe[0], pipe);
        }
    }
    else{
        close(fd[0]);
        dup2(fd[1], STDOUT_FILENO);
        close(fd[1]);
        execvp(args_parsed[0], args_parsed);
    }

}

i