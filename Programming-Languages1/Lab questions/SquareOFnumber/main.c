#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, square;
    printf("Enter a number:\n");
    scanf("%d", &number);

    square = number * number;

    printf("The square of %d is %d.", number, square);

    return 0;
}
