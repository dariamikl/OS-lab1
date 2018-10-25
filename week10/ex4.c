//
// Created by Daria Miklashevskaya on 25/10/2018.
//

#include <sys/stat.h>
#include <dirent.h>
#include <stdio.h>

int main(){
    DIR *dir;
    struct dirent *de;
    struct stat buff;
    char * curr;
    long long unsigned p;

    dir = opendir("./tmp");

    while((de=readdir(dir))!=0){
        curr = de -> d_name;
        int res = stat(curr,&buff);
        if (buff.st_ino != p){
        printf("%d ",buff.st_nlink);
        printf("%s\n",curr);
    }
    }


    closedir(dir);


}