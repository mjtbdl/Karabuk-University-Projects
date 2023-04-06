#include <stdio.h>

int main(){
    int i;
    int *iptr;
    i = 5;
    iptr = &i;

    printf("adress of i is %p \n", &i);
    printf("value of iptr is %p \n", iptr);

    printf("value of i is %d \n", i);
    printf("value of iptr is %d \n", *iptr);
}// example of pointer usage