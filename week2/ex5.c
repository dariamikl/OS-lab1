//
// Created by Daria Miklashevskaya on 29/08/2018.
//

#include <stdio.h>
#include <string.h>


void printFigure(int n, int figureChoice);


int main(int argc, char *argv[]) {

    int n;
    sscanf(argv[1], "%d", &n);
    int figureChoice = 0;
    char input[10];
    printf("Choose a figure to print. Choices:\n 0 - square,\n 1 - triangle,\n 2 - right triangle,\n 3 - arrow\n Please, print a number.");
    scanf("%s", input);
    sscanf(input, "%d", &figureChoice);


    printFigure(n, figureChoice);
    return 0;
}


void printTriangle(int n) {
    int length = 2 * n - 1;
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

void printRightTriangle(int n) {
    int length = n;
    char res[length];
    int i;
    for (i = 0; i < length; i++) {
        res[i] = ' ';
    }
    res[i] = '\0';
    for (i = 0; i < n; i++) {
        res[i] = '*';

        printf("\n%s\n", res);
    }


}

void printArrow(int n) {
    int length = n / 2;
    int length2 = n - length;
    char res[length];
    char res2[length2];
    int i;
    for (i = 0; i < length; i++) {
        res[i] = ' ';
    }
    res[i] = '\0';
    for (i = 0; i < length2; i++) {
        res2[i] = '*';
    }
    res2[i] = '\0';

    for (i = 0; i < length; i++) {
        res[i] = '*';

        printf("\n%s\n", res);
    }

    printf("\n%s\n", res2);
    for (i = 0; i < length2 - 1; i++) {
        res2[length2 - i - 1] = ' ';

        printf("\n%s\n", res2);
    }


}

void printSquare(int n) {
    int length = n;
    char res[length];
    int i;
    for (i = 0; i < length; i++) {
        res[i] = '*';
    }
    res[i] = '\0';
    for (i = 0; i < n; i++) {
        printf("\n%s\n", res);
    }


}

void printFigure(int n, int figureChoice) {
    switch (figureChoice) {
        case 0:
            printSquare(n);
            break;
        case 1:
            printTriangle(n);
            break;
        case 2:
            printRightTriangle(n);
            break;
        case 3:
            printArrow(n);
            break;
        default:
            printf("Invalid figure number");
    }


}
