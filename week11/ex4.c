//
// Created by Daria Miklashevskaya on 01/11/2018.
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
    char * addr2;
    int fd2; //file descriptor
    off_t size2;
    struct stat s2;



    fd = open("ex1.txt", O_RDWR); //open the file for reading and writing

    fstat(fd,&s);

    size = s.st_size;

    addr = mmap(NULL, size,PROT_READ|PROT_WRITE,MAP_SHARED, fd,0);

    fd2 = open("ex1.memcpy.txt", O_RDWR); //open the file for reading and writing

    fstat(fd2,&s2);

    size2 = s2.st_size;

    addr2 = mmap(NULL, size2,PROT_READ|PROT_WRITE,MAP_SHARED, fd2,0);


    ftruncate(fd2, strlen(addr)*sizeof(char));

    memcpy(addr2, addr, size2);

//    munmap(addr, size);
//    close(fd);
//
//    munmap(addr2, size2);
//    close(fd2);





}