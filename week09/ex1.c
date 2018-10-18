//
// Created by Daria Miklashevskaya on 17/10/2018.
//

#include <stdio.h>
#include <stdlib.h>


int update_register(int *pages, int ref, int *current);

void main(){
    int pages = 100;
    int frames;

printf("Enter number of frames");
scanf("%d", &frames);
    int frame_table [frames]; // value defines age
    int page_table [pages];
    int page_ref [pages];

    for (int i =0; i<frames; i++){
        frame_table[i] = 0;
    }
    int current;
    int curr_counter = 0;
    int hit;
    int miss;
    int hits_counter;
    int miss_counter;

    FILE *fp;
    fp = fopen("input.txt","r");
    while(fscanf(fp, "%d", &current)>0){
        curr_counter++;
        if (hit) hits_counter++;
        else miss_counter++;



    }



}
int update_register(int *pages, int ref, int *current){
page_ref[ref] = 1;

}