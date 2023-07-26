#include <stdio.h>

int main()
{
    int sum = 0;
    int i;

    for (i = 2; i <= 100; i = i + 2)
    {

        sum = sum + i;

        printf("%d\n", sum);
    }
}