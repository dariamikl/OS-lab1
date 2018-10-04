//
// Created by Daria Miklashevskaya on 04/10/2018.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *realloc(void *ptr, size_t size);
int main(){ //Using the code from ex4 to demonstrate the work of this realloc implementation


        printf("Enter original array size:");
        int n1 = 0;
        scanf("%d", &n1);
        int *a1 = malloc(n1 * sizeof(int));
        int i;
        for (i = 0; i < n1; i++) {
            a1[i] = 100;
            printf("%d ", a1[i]);
        }

        while(1) {
            printf("\nEnter new array size: ");
            int n2 = 0;
            scanf("%d", &n2);
            a1 = realloc(a1, n2 * sizeof(int));

            if (n2 > n1) {
                for (int i = n1; i < n2; i++) {
                    a1[i] = 0;
                }
            }


            for (i = 0; i < n2; i++) {
                printf("%d ", a1[i]);
            }
            printf("\n");
        }


}

void *realloc(void* ptr, size_t size)
{
    void* result = malloc(size);
    if (ptr != NULL) {
        if (size==0) free(ptr);
        else {
            memcpy(result, ptr, size);
            free(ptr);
        }
    }
    return result;
}


