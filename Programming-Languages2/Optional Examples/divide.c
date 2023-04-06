#include <stdio.h>

int divide(int dividend, int divisor) {
    // Base case: If the dividend is less than the divisor, the result is 0
    if (dividend < divisor) {
        return 0;
    }

    // Recursive case: Subtract the divisor from the dividend, and add 1 to the result
    return divide(dividend - divisor, divisor) + 1;
}

int main() {
    int dividend, divisor, result;

    printf("Enter the dividend: ");
    scanf("%d", &dividend);

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    result = divide(dividend, divisor);

    printf("Result: %d\n", result);

    return 0;
}
