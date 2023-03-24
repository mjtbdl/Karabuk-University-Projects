#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, remainder;
    printf("Enter a number:\n");
    scanf("%d", &number);

    remainder = number % 2;

    if (remainder == 0){
        printf("The number is even.");
    }
    else{
        printf("The number is odd.");
    }
    return 0;
}
