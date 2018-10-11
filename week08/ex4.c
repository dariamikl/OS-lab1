//
// Created by Daria Miklashevskaya on 11/10/2018.
//

#include <sys/resource.h>
#include <stdio.h>

#define SIZE 81920

void main() {
    int c = 0;
    while (c < 10) {
        int *p = malloc(SIZE);
        struct rusage s;
        memset(p, 0, SIZE);
        getrusage(RUSAGE_SELF, &s);
        printf("%ld ", s.ru_maxrss);
        sleep(1);
        c++;
    }

}