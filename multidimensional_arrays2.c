#include <stdio.h>

int main()
{

    int marks[2][7] = {{8, 6, 4}, {9, 5, 1}};

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)

            printf("%d", marks[i][j]);

        printf("\n");
    }

    return (0);
}