#include <stdio.h>

int main()
{

    int number;

    printf("Please enter number: ");
    scanf("%d", &number);

    while (1)
    {
        if (number % 2 <= -1)
        {
            printf("%d\n", number);
            break;
        }

        if (number % 2 > 0)
        {
            printf("Positive number\n");
                }
    }
}