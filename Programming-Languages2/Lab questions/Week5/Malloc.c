#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    int n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    p = (int*)malloc(n * sizeof(int));

    printf("Enter elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", p + i);
        sum += *(p + i);
    }

    printf("Sum is %d", sum);

    free(p);
}//example of malloc function.