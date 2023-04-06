#include <stdio.h>

int main(){
    int a,b,c;
    int *p1,*p2;

    printf("Element 1: ");
    scanf("%d", &a);
    printf("Element 2: ");
    scanf("%d", &b);
    printf("Element 3: ");
    scanf("%d", &c);

    printf("%d %d %d \n",a,b,c);

    p1 = &c;
    *p2 = a;
    
    a = *p1;
    c = *p2;

    printf("%d %d %d",a,b,c);
}