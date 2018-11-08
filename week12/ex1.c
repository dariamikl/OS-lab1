//
// Created by Daria Miklashevskaya on 08/11/2018.
//

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>


int main() {
    int fd = open("/dev/random", O_RDONLY);

    char bf[20];
    read(fd, bf, 20);

    char string[21];
    int i = 0;

    while (i < 20) {
        string[i] = 'a' + (int) bf[i] % ('z' - 'a' + 1);
        i++;
    }

    string[20] = '\0';


    printf("%s\n", string);

}
