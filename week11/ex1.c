//
// Created by Daria Miklashevskaya on 31/10/2018.
//

#include <stdio.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    char * addr;
    int fd; //file descriptor
    off_t size;
    struct stat s;



    fd = open("ex1.txt", O_RDWR); //open the file for reading and writing

    fstat(fd,&s);

    size = s.st_size;

    addr = mmap(NULL, size,PROT_READ|PROT_WRITE,MAP_SHARED, fd,0);

    char str [] = "This is a nice day";


    strcpy(addr,str);

    munmap(addr, size);
    close(fd);





}