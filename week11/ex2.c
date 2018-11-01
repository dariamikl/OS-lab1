//
// Created by Daria Miklashevskaya on 01/11/2018.
//
#import <unistd.h>
#import <string.h>
#import <stdio.h>
int main(){
    char str [] = "Hello\n";
    for (int i=0; i< strlen(str);i++){
        printf("%c", str[i]);
        sleep(1);
    }
}
//On output, data is written when a newline character is inserted
//into the stream or when the buffer is full, what so ever happens
//first.
//(c) slide 13