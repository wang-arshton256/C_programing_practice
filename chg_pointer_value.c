#include <stdio.h>

int main()
{

    int age = 25;

    int *wangAge = &age;

    *wangAge = 30;

    printf("Your age is %d years old.\n", age);
    printf("The memory address for your age is %p.", &age);

    return (0);
}