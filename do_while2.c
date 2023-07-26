#include <stdio.h>

int main()
{

    int number;

    printf("Please enter the number: ");
    scanf("%d", &number);

    int count = 10;

    do
    {
        int product = number * count;
        printf("%d * %d = %d\n", number, count, product);

    } while (count--);

    return (0);
}