#include <stdio.h>

int main(){
    int x,y;
    int *p1, *p2;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    p1 = &x;
    p2 = &y;

    printf("Sum is %d", *p1 + *p2);
}