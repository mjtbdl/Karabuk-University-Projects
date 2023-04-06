#include <stdio.h>

int main(){
    int xyz = 10, k;
    int *ptr;
    ptr = &xyz;
    k = *ptr;

    printf("value of k is %d \n", k);
}