#include <stdio.h>

int main()
{

    int n = 4;

    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));

    printf("Enter input values: \n");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
    }

    printf("Inputr Values:\n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d\n", *(ptr + i));
    }
    return (0);
}