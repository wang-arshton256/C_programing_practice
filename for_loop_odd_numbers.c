#include <stdio.h>

int main()
{
    int sum;
    int odd_number;

    for (odd_number = 1; odd_number <= 100; odd_number++)
    {
        if (odd_number % 2 == 1)
        {
            printf("%d\n", sum);
        }
    }
    return (0);
}