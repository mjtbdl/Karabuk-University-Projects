#include <stdio.h>

int main(){
    double i;
    double *pntr;

    pntr = &i;

    printf("value of i: %d \n", sizeof(i));
    printf("value of pntr: %d", sizeof(pntr));
}//This program declares a double and pointer variable, assigns the address of double to pointer, and prints their sizes using sizeof().