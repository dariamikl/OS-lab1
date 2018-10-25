//
// Created by Daria Miklashevskaya on 25/10/2018.
//

#include <sys/stat.h>
#include <dirent.h>
#include <stdio.h>
#include <string.h>

int main() {
    DIR *dir;
    struct dirent *de;
    struct stat buff;
    char *curr;
    long long unsigned p;
    int n = -1;


    dir = opendir("./tmp/");

    while ((de = readdir(dir)) != NULL) {
        char dirname[MAXNAMLEN] = "./tmp/";
        curr = strcat(dirname, de->d_name);
        int res = stat(curr, &buff);

        if (buff.st_nlink > 1) {
            //this is formatting that was added later (after the deadline)
            if (buff.st_nlink != n) printf("\n");
            n = buff.st_nlink;
            //printf("%d ", buff.st_nlink);
            printf("%s ", de->d_name);


        }


    }
    printf("\n");


    closedir(dir);


}