#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter a number:\n");
    scanf("%d", &number);

    if (number <= 0){
        printf("The number is below freezing.");
    }
    else{
        printf("The number is above freezing.");
    }
    return 0;
}
