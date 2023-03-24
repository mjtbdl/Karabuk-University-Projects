#include <stdio.h>

int main()
{
    printf("Enter two numbers: ");
    int a, b;
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d \n", a, b);

    // Swap a and b
    int temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d", a, b);
}