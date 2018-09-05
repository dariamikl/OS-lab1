//
// Created by Daria Miklashevskaya on 05/09/2018.
//
#include <stdio.h>

void swap(int *first, int *second) {
    int temp;
    temp = *first;
    *first = *second;
    *second = temp;
}

int partition(int *arr, int low, int high){
    int pivot = arr[high];
    int i = low-1;
    for (int j=low; j<=high-1; j++){
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);


        }


    }

    swap(&arr[i+1], &arr[high]);
    return i+1;
}

void quickSort(int arr[], int low, int high){
    if (low < high){
        int p = partition(arr, low, high);
        quickSort(arr, low, p-1);
        quickSort(arr, p+1, high);
    }

}



int main(){
    int start = 0;
    int finish;
    int max_length;
    int current_element;
    int current_length;
    printf("Please, enter the number of elements: \n");
    scanf("%d", &max_length);
    int array [max_length];
    printf("Please, enter the elements of your array (max length is %d) \n", max_length);

    while (current_length < max_length){
        scanf("%d", &current_element);
        array[current_length] = current_element;
        current_length++;


    }

    finish = max_length;
    quickSort(array, start, finish);
    printf("The sorted array:");
    for (int i=0; i<max_length; i++){
        printf("%d ", array[i]);

    }
    printf("\n");
}