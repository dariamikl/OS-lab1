//
// Created by Daria Miklashevskaya on 29/08/2018.
//

#include <stdio.h>
#include <string.h>

#define STRING_LENGTH 80

void swap(int *first, int *second);

int main() {

    int first = 0, second = 0;
    char input[STRING_LENGTH];


    printf("Enter first int, please:");
    scanf("%s", input);
    sscanf(input, "%d", &first);
    printf("Enter second int, please:");
    scanf("%s", input);
    sscanf(input, "%d", &second);

    swap(&first, &second);
    printf("Swapped first: %d, swapped second: %d\n", first, second);
    return 0;
}


void swap(int *first, int *second) {
    int temp;
    temp = *first;
    *first = *second;
    *second = temp;
}


