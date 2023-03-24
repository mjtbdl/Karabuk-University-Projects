#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 999;
    do{
        if (number % 2 == 0){
            printf("%d ", number);
            number = number + 1;
        }
        else{
            number = number + 1;
        }
    }
    while (number <= 2000);

    return 0;
}
