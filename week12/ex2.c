//
// Created by Daria Miklashevskaya on 08/11/2018.
//
#include <stdio.h>

#include <unistd.h>
#include <fcntl.h>
#include <string.h>


int main(int argc, char* argv[]){
    char file_name[255] = "";
    char b;
    int fd;


   if (argc>2){
       if (strcmp(argv[1], "-a")==0){
           strcpy(file_name, argv[2]);
           fd = open(file_name, O_RDWR|O_APPEND);
       }
   }
   else {
       strcpy(file_name, argv[1]);
       fd = open(file_name, O_WRONLY);}
       while (read(STDIN_FILENO, &b, 1) > 0) {
           write(fd, &b, 1);
       }




}