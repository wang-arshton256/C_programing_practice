#include <stdio.h>

int main()
{

    int number;

    printf("Please enter the number: ");
    scanf("%d", &number);

    int count = 1;

    do
    {
        int product = number * count;
        printf("%d * %d = %d\n", number, count, product);

        count = count + 1;
    } while (count <= 10);

    return (0);
}