#include <stdio.h>

int main()
{

    int marks[5][7] = {{85, 69, 45, 78, 36},
                       {98, 95, 21, 45, 65, 53, 47}};

    marks[0][2] = 102;
    marks[1][6] = 10800000;

    printf("%d\n", marks[0][2]);
    printf("%d\n", marks[1][2]);
    printf("%d\n", marks[1][6]);

    return (0);
}