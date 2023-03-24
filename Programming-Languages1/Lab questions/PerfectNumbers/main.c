# include <stdio.h>

int main()
{
 int i, number, sum = 0 ;

 printf("Please enter a positive integer\n");
scanf("%d", &number);

// calculating whether the entered number is a perfect number
for(i = 1; i < number; i++)
{
    if(number % i == 0)
    {
        sum = sum + i;
    }
}

// outputting the result
if(sum == number)
{
    printf("%d is a perfect number\n", number);
}
else
{
    printf("%d is not a perfect number\n", number);
}

return 0;
}
