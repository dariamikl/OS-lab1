//
// Created by Daria Miklashevskaya on 26/09/2018.
//

#include <stdio.h>
#include <unistd.h>
#define MAX_LENGTH 255
char* string_with_text = "Lorem ipsum blablabla";
char string_empty [MAX_LENGTH];

int main(){
    int fd[2];
    pipe(fd); //fd is an array for file descriptors for the read end and the write end respectively


    write(fd[1], string_with_text, MAX_LENGTH);
    read(fd[0], string_empty, MAX_LENGTH);

    printf("New string (which was empty):%s\n", string_empty);

}