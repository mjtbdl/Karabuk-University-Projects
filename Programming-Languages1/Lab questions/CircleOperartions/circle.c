#include <stdio.h>
#include <stdlib.h>

int main()
{
    int radius, operation;
    printf("Please enter the radius:\n");
    scanf("%d", &radius);

    printf("Please select the operation type:\n");
    scanf("%d", &operation);

    if (operation == 1){
        printf("The circumference of the circle is %.2f", 2*3.14*radius);
    }
    else if (operation == 2){
        printf("The area of the circle is %.2f", 3.14*radius*radius);
    }
    else{
        printf("Incorrect input.");
    }
    return 0;
}
