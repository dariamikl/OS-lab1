//
// Created by Daria Miklashevskaya on 12/09/2018.
//

#include <stdio.h>
#include <stdlib.h>

#define GREEN_COLOR  "\x1B[32m"
#define MAGENTA_COLOR   "\x1B[35m"
#define RED_COLOR   "\x1B[31m"
#define NORMAL_COLOR  "\x1B[0m"
#define MAX_COMMAND_SIZE 255


void print_prompt();
void process_command();


int main(){
char* command;
while(1){
    print_prompt();
    process_command();

}
}

void print_prompt(){
    printf("%s>>>>", GREEN_COLOR);
    printf("%s", NORMAL_COLOR);
    printf("\n");
}

void process_command(){
    char command [255];
    scanf("%s", command);
    system(command);


}

//void print_error_message(){
//    printf("%s>>>>", RED_COLOR);
//
//    printf("ERRRRROR. Try again");
//    printf("%s\n", NORMAL_COLOR);
//}