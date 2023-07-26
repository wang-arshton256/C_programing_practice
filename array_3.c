#include <stdio.h>

int main()
{

    int age[4];

    printf("Please enter the student's age respectively: ");
    scanf("%d", &age[0]);
    scanf("%d\n", &age[1]);
    scanf("%d\n", &age[2]);
    scanf("%d\n", &age[3]);

    age[2] = 100;

    printf("Student age 1 is %d\n", age[0]);
    printf("Student age 2 is %d\n", age[1]);
    printf("Student age 3 is %d\n", age[2]);
    printf("Student age 4 is %d\n", age[3]);

    return (0);
}