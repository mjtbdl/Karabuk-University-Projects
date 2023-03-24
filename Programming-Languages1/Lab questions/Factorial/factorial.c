#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, result, counter;
    printf("Enter a number:\n");
    scanf("%d", &num);

    counter = 1;
    result = 1;

    do{
        result = result * counter;
        counter = counter + 1;
    }
    while (counter <= num);

    printf("The factorial of %d is %d.", num, result);

    return 0;
}
