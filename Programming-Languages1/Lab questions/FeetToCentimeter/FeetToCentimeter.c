#include <stdio.h>
#include <stdlib.h>

int main()
{
    float feet, cm;
    printf("Enter length in feet: ");
    scanf("%f", &feet);

    cm = feet * 30.48;

    printf("%.2f feet is equal to %.2f centimeters.", feet, cm);

    return 0;
}
