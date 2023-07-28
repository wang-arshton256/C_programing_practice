#include <stdio.h>

int calculateSquare(int number)
{
    int square = number * number;
    /*printf("Square of %d is %d", number, square);*/

    return square;
}

int main()
{
    int result = calculateSquare(12);
    printf("Square = %d", result);

    return (0);
}