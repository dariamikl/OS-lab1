//
// Created by Daria Miklashevskaya on 29/08/2018.
//

#include <stdio.h>
#include <string.h>

#define STRING_LENGTH 80

void printTriangle(int n);

int main() {

    int n = 0;
    char input[10];
    printf("Enter n, please:");
    scanf("%s", input);
    sscanf(input, "%d", &n);
    printTriangle(n);
    printf("%d", n);
    return 0;
}


void printTriangle(int n) {
    int length = 2 * n + 1;
    char res[length];
    int medium = n;
    int i;
    for (i = 0; i < length; i++) {
        res[i] = ' ';
    }
    res[i] = '\0';
    for (i = 0; i < n; i++) {
        res[medium + i] = '*';
        res[medium - i] = '*';

        printf("\n%s\n", res);
    }


}