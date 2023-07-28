#include <stdio.h>

int numbers(int number1, int number2, int number3);

int main()
{

    int entries = numbers(78, 49, 1000);
    printf("%d\n", entries);

    return (0);
}

int numbers(int number1, int number2, int number3)
{

    int multiply = number1 * number2 * number3;

    return (multiply);
}