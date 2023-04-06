#include <stdio.h>

int main(){
    int x= 12, y= 15, z;
    int *pntr;

    pntr = &x;
    z = *pntr;
    printf("z = %d \n", z);

    pntr = &y;
    z = *pntr;
    printf("z = %d", z);
}// This program assigns integer addresses to a pointer, then prints their values twice.