#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    void *a;
    a = (char*)malloc(6);
    strcpy((char*)a,"hello");
    printf("%s\n", a);
    free(a);
    a = (double*)malloc(8);
    *(double*)a = 3.14;
    printf("%lf\n", *(double*)a);
    free(a);
    return 0;
}