#include <stdio.h>

double power(double base, int exponent) {
    // Base case: If the exponent is 0, the result is 1
    if (exponent == 0) {
        return 1.0;
    }

    // Recursive case: Multiply the base by the result of raising the base to the exponent-1 power
    return base * power(base, exponent - 1);
}

int main() {
    double base, result;
    int exponent;

    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    result = power(base, exponent);

    printf("%lf to the power of %d is %lf\n", base, exponent, result);

    return 0;
}
