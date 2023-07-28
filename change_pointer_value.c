#include <stdio.h>

int main()
{

    int age = 45;

    int *wang = &age;

    *wang = 30;

    printf("Your age is %d\n", age);

    return (0);
}