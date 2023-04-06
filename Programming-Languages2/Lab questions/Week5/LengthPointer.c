#include <stdio.h>

#define MAX_SIZE 100 

int main()
{
    char str[MAX_SIZE];
    char *s;

    printf("Enter a string: ");
    scanf("%s", str);

    s = str;

    while (*s != '\0')
    {
        printf("%c", *s);
        s++;
    }

    printf("\n");

    printf("Length of string: %d", s - str);

    return 0;
}
