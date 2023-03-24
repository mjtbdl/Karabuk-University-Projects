#include <stdio.h>
#include <stdlib.h>

int main()
{
    int degrees;
    printf("Enter the temperature in Fahrenheit:\n");
    scanf("%d", &degrees);

    printf("The temperature in Celsius is %.2f", (degrees-32)/1.8);
    return 0;
}
