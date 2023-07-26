#include <stdio.h>

/**
 * A program which enters a number and if the number is positive, it is printed. If the number is negative, the while loop is terminated.
 *
 * */

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