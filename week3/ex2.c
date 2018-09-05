//
// Created by Daria Miklashevskaya on 05/09/2018.
//

#include <stdio.h>


void bubbleSort(int *arr, int n);


int main()
{

    int arr_length, current_length = 0;
    int current_element;
    int max_length = 0;

    printf("Please, enter the number of elements: \n");
    scanf("%d", &max_length);
    int array [max_length];
    printf("Please, enter the elements of your array (max length is %d) \n", max_length);

    while (current_length < max_length){
        scanf("%d", &current_element);
        array[current_length] = current_element;
        current_length++;


    }

    bubbleSort(array, current_length);

    printf("Sorted array: \n");

    for (int i=0; i<current_length; i++)
        printf("%d ", array[i]);
    printf("\n");
}

void bubbleSort(int *arr, int n){
int i, j, temp;

for (i = 0; i<n-1;i++){
    for (j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}
}

