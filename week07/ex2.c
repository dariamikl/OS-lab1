//
// Created by Daria Miklashevskaya on 03/10/2018.
//
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 0;
    int *arr;

    while (1){
        printf("\nPlease, enter the N (number of elements in the array) :) ");
        scanf("%d", &n);
        arr = (int*) malloc(n* sizeof(int));
        printf("The new array is:\n");
        for (int i = 0; i<n; i++){
            arr[i] = i;
            printf("%d ", arr[i]);

        }
        free(arr);

    }
}