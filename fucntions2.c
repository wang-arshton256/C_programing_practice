#include <stdio.h>

int addNumbers(int number1, int number2)
{
    printf("Please enter student's marks");
    scanf("%d %d" & number1 & number2);

    int sum = number1 + number2;
    return sum;
}

int main()
{
    int result = addNumbers(int number1, int number2);
    printf("sum = %d", result);

    return (0);
}