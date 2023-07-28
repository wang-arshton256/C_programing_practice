#include <stdio.h>

int *addnumbers(int *num1, int *num2, int *sum)
{

    *sum = *num1 + *num2;
    return sum;
}

int main()
{
    int number1 = 32;
    int number2 = 82;
    int sum;

    int *result = addnumbers(&number1, &number2, &sum);
    printf("The sum of numbers 1 & 2 is = %d", *result);
    return (0);
}