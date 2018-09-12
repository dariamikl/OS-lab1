//
// Created by Daria Miklashevskaya on 12/09/2018.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define GREEN_COLOR  "\x1B[32m"
#define MAGENTA_COLOR   "\x1B[35m"
#define RED_COLOR   "\x1B[31m"
#define NORMAL_COLOR  "\x1B[0m"
#define MAX_COMMAND_SIZE 255
#define MAX_ARGS_NUMBER 100

void print_prompt();
void process_command();


int main(){

    while(1){
        print_prompt();
        process_command();

    }

}

void print_prompt(){
    printf("%s>>>>", GREEN_COLOR);
    printf("%s", NORMAL_COLOR);
    printf("\n");
}

void process_command(){
    char command [MAX_COMMAND_SIZE];
    char* parsed_command;
    char* command_name;
    char* args[MAX_ARGS_NUMBER];
    int index = 0;
    char* token;


    fgets(command, MAX_COMMAND_SIZE, stdin);
    sscanf(command, "%[^\n]", command);
    while (token!=NULL){
        token = strtok(command, " ");
        strcpy(args[index], token);
        index++;
    }
    int pid;

    if (command[strlen(command)] == '&')
        pid = fork();
    printf("%s", args[1]);

    if (pid==0) {

        execve(args[0], args, NULL);
    } else{
        wait(NULL);
    }

    execve(args[0], args, NULL);




    }











