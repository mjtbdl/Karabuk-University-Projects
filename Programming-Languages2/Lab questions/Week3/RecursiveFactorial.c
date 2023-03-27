#include <stdio.h>

long faktoriyel(long n){
    if (n <= 1){
        return 1;}
    else{
        return (n*faktoriyel(n - 1));}
}

int main(){

int i;

for (i = 0; i <= 10; i++) {
    printf("%d! = %d\n", i, faktoriyel(i));}
return 0;
}