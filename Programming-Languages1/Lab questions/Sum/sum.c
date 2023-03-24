#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2, sum;
    printf("Enter the first number:\n");
    scanf("%d", &number1);

    printf("Enter the second number:\n");
    scanf("%d", &number2);

    sum = number1 + number2;

    printf("The sum of %d and %d is %d.", number1, number2, sum);

    return 0;
}
