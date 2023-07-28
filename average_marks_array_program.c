#include <stdio.h>
#include <math.h>

int addThem;
int divideThem;

int main()
{

    int marks[5];

    printf("Please enter the marks for the (5) subjects: ");
    for (int m = 0; m < 5; m++)

        scanf("%d\n", &marks[m]);

    return marks;

    int addThem = sum(marks);

    return addThem;

    divideThem = (addThem) / 5;
    return divideThem;

    printf("%d", divideThem);

    return (0);
}