#include <stdio.h>

int main()
{
    while (1)
    {
        int number;

        printf("Please enter a number: ");
        scanf("%d", &number);

        if (number < 0)
        {
            break;
        }
        printf("%d\n", number);
    }
    return (0);
}