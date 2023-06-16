#include <stdio.h>

int square(int);
int cube(int);

int main(void)
{
    int (*fptr)(int); // Function pointer to store the address of square or cube function
    int i; // Variable to store the input value
    char c; // Variable to store the choice

    printf("1- Square\n2- Cube\n"); // Prompt the user to choose an operation
    c = getchar(); // Read the choice character

    while (c != '1' && c != '2') // Loop until a valid choice is entered
    {
        printf("1- Square\n2- Cube\n"); // Prompt the user to choose an operation
        scanf(" %c", &c); // Read the choice character
    }

    printf("Enter a value: "); // Prompt the user to enter a value
    scanf("%d", &i); // Read the input value

    if (c == '1')
        fptr = square; // Assign the address of square function to the function pointer
    else
        fptr = cube; // Assign the address of cube function to the function pointer

    printf("Result: %d\n", fptr(i)); // Call the appropriate function using the function pointer and print the result

    return 0;
}

int square(int x)
{
    return x * x; // Calculate and return the square of the input value
}

int cube(int x)
{
    return x * x * x; // Calculate and return the cube of the input value
}
