#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *array;
    int i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    array = (int *)malloc(n * sizeof(int));

    for(i = 0; i < n; i++){
        printf("Address: %d \t Value: %d \n", array + i, *(array + i));	
    }
    free(array);
    while (getchar() != '\n')
    {
        getchar();
    }
    return 0;
}