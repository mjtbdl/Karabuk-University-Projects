#include <stdio.h>
#include <stdlib.h>

int sum(int n){
    if(n == 0){
        return 0;
    }
    else{
        return n%10 + sum(n/10);
    }
}

int main(){
    int n;

    printf("enter a number:");
    scanf("%d", &n);

    printf("sum of the digits of %d is %d", n, sum(n));
}// example of a program that uses a function to calculate the sum of the digits of a number.