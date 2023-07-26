#include <stdio.h>

void multiplyNumbers(int number1, int number2)
{
    int sum = number1 * number2;

    printf("Multiplication of %d and %d = %d\n", number1, number2, sum);
}

int main()
{

    multiplyNumbers(25, 4);
    multiplyNumbers(29, 1);
    multiplyNumbers(12, 12);
    return (0);
}