#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    void *a; // Void pointer to store memory addresses of different types
    a = (char*)malloc(6); // Allocate memory for a character array of size 6
    strcpy((char*)a, "hello"); // Copy the string "hello" into the allocated memory
    printf("%s\n", a); // Print the content of the allocated memory as a string
    free(a); // Deallocate the previously allocated memory

    a = (double*)malloc(8); // Allocate memory for a double value
    *(double*)a = 3.14; // Store the value 3.14 in the allocated memory
    printf("%lf\n", *(double*)a); // Print the content of the allocated memory as a double
    free(a); // Deallocate the memory

    return 0;
}
