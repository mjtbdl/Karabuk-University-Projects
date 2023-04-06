#include <stdio.h>

int multiply(int f1, int f2){
    // Base case: if the second number is 0, the result is 0
    if (f2 == 0){
        return 0;
    }
    // Recursive case: subtract 1 from the second number, and add the first number to the result
    return multiply(f1, f2 - 1) + f1;
}

int main(){
    int f1, f2, result;

    printf("Enter the first number: ");
    scanf("%d", &f1);

    printf("Enter the second number: ");
    scanf("%d", &f2);

    result = multiply(f1, f2);

    printf("Result: %d\n", result);
}