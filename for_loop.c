#include <stdio.h>

int main()
{
    int sum = 0;
    for (int number = 1; number <= 100; number++;)
    {
        sum = sum + number;
        printf("%d + %d = %d \n", number, sum, sum);
    }
}