#include <stdio.h>

int square(int);
int cube(int);

int main(void)
{
    int (*fptr)(int);
    int i;
    char c;
    printf("1- Square\n2- Cube\n");
    c = getchar();
    while (c != '1' && c != '2')
    {
        printf("1- Square\n2- Cube\n");
        scanf(" %c", &c);
    }

    printf("Enter a value: ");
    scanf("%d", &i);

    if (c == '1')
        fptr = square;
    else
        fptr = cube;

    printf("Result: %d\n", fptr(i));

    return 0;
}

int square(int x)
{
    return x * x;
}

int cube(int x)
{
    return x * x * x;
}