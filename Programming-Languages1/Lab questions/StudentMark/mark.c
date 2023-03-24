#include <stdio.h>
#include <stdlib.h>

int main(){
    int number = 0;
    float exam1, exam2, sum = 0;

    printf("Enter your student number: ");
    scanf("%d", &number);

    printf("Enter your exam1 and exam2 grades: ");
    scanf("%f %f", &exam1, &exam2);

    exam1 = exam1 * 40 / 100;
    exam2 = exam2 * 60 / 100;

    printf("dear student number %d, your final grade is %.2f", number, exam1 + exam2);
}