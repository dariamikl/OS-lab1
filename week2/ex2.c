//
// Created by Daria Miklashevskaya on 29/08/2018.
//

#include <stdio.h>
#include <string.h>

#define STRING_LENGTH 255

void reverseString(char input[], char output[]);

int main() {

    char str[STRING_LENGTH], revStr[STRING_LENGTH];


    printf("Enter a string:\n");
    scanf("%s", str);

    reverseString(str, revStr);

    printf("Reverse of the string is \n%s\n", revStr);

    return 0;
}


void reverseString(char input[], char output[]) {
    long length = 0;
    int i = 0;


    length = strlen(input);

    while (i < length) {
        output[i] = input[length - i - 1];
        ++i;
    }
    output[i] = '\0';
}