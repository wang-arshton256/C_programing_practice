#include <stdio.h>

int multiplyNumbers(int number1, int number2)
{
    int multiply = number1 * number2;
    return multiply;
}

int main()
{

    int result = multiplyNumbers(782, 2);
    printf("%d\n", result);

    return (0);
}