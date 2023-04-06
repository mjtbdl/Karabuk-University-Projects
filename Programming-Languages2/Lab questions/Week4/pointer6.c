#include <stdio.h>

int main(){
    int i, *iptr;
    double y, *dptr;

    iptr = &i;
    printf("address of i: %d \n", iptr);
    iptr++; //incrementing the pointer by 1 will increment the address by 4 bytes
    printf("address of i: %d \n", iptr);

    dptr = &y;
    printf("address of y: %d \n", dptr);
    dptr++; //incrementing the pointer by 1 will increment the address by 8 bytes
    printf("address of y: %d \n", dptr);
}