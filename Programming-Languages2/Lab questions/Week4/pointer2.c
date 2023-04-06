#include <stdio.h>

int main(){
    int i;
    int *iptr;
    iptr = &i;
    *iptr = 8;

    printf("value of i is %d \n", i);
    printf("value of iptr is %d \n", *iptr);
}