//
// Created by Daria Miklashevskaya on 11/10/2018.
//

#define SIZE 81920

void main() {
    int c = 0;
    while (c < 10) {
        int *p = malloc(SIZE);
        memset(p, 0, SIZE);
        sleep(1);
        c++;
    }

}