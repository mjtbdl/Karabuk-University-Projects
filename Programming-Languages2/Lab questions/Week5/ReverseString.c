#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char* ptr;

    printf("Enter a string: ");
    scanf("%s", str);

    ptr = str + strlen(str) - 1;

    printf("Reversed string: ");
    while (ptr >= str) {
        printf("%c", *ptr);
        ptr--;
    }

    return 0;
}
