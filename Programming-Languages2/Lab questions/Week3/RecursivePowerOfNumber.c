#include <stdio.h>
#include <stdlib.h>

int power(int base, int exponent){
    if (exponent != 0){
        return (base*power(base, exponent - 1));}
    else{
        return 1;}
}

int main(){
    int b, e;

    printf("Enter base number: ");
    scanf("%d", &b);
    printf("Enter power number(positive integer): ");
    scanf("%d", &e);

    printf("%d. power of %d is %d", b, e, power(b, e));
}