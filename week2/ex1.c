//
// Created by Daria Miklashevskaya on 29/08/2018.
//

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    int integerVar;
    float floatVar;
    double doubleVar;

    integerVar = INT_MAX;
    floatVar = FLT_MAX;
    doubleVar = DBL_MAX;


    printf("Size of integer: %ld bytes,\n Max value of integer: %d\n", sizeof(integerVar), integerVar);
    printf("Size of float: %ld bytes,\n Max value of float: %f\n", sizeof(floatVar), floatVar);
    printf("Size of double: %ld bytes,\n Max value of double: %e\n", sizeof(doubleVar), doubleVar);


    return 0;
}