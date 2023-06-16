#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *array;  // Pointer to integer array
    int i, n;    // Variables for iteration and number of elements

    printf("Enter the number of elements: ");
    scanf("%d", &n);  // Read the number of elements from the user

    array = (int *)malloc(n * sizeof(int));  // Allocate memory for the array dynamically

    for (i = 0; i < n; i++) {
        printf("Address: %d \t Value: %d \n", array + i, *(array + i));  // Print the address and value of each element
    }

    free(array);  // Free the allocated memory

    // Clear any remaining characters from the input buffer
    while (getchar() != '\n') {
        getchar();
    }

    return 0;  // Indicate successful program execution
}
